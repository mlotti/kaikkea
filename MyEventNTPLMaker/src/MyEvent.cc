#include "HiggsAnalysis/MyEventNTPLMaker/interface/MyEvent.h"
#include "HiggsAnalysis/MyEventNTPLMaker/interface/MyConvertCollection.h"

#include "TObjString.h"

#include<iomanip>

using std::map;
using std::pair;
using std::make_pair;
using std::vector;
using std::string;
using std::ostream;
using std::cout;
using std::endl;
using std::setw;

template <typename T, typename I=typename T::iterator>
struct FindHelper {
  static I find(T& collections, const std::string& name, const char *str) {
    I found = collections.find(name);
    if(found == collections.end()) {
      cout << "Requested " << str << " " << name << " which doesn't exist." << endl
           << "The following " << str << "s exist:" << std::endl;
      for(typename T::const_iterator iter = collections.begin(); iter != collections.end(); ++iter) {
        std::cout << "  " << iter->first << std::endl;
      }
      exit(0);
    }
    return found;
  }
};
template <typename T>
static typename T::iterator findCollection(T& collections, const std::string& name, const char *str) {
  return FindHelper<T>::find(collections, name, str);
}
template <typename T>
static typename T::const_iterator findCollection(const T& collections, const std::string& name, const char *str) {
  return FindHelper<const T, typename T::const_iterator>::find(collections, name, str);
}


template <typename T>
struct MyEventTraits {
  static const char *name() { return ""; }
};
template <>
struct MyEventTraits<MyJet> {
  static const char *name() { return "MyJet"; }
};
template <>
struct MyEventTraits<MyMCParticle> {
  static const char *name() { return "MyMCParticle"; }
};

template <typename T>
std::vector<T>& addCollectionTmpl(std::map<std::string, std::vector<T> >& colls, const std::string& name, const std::vector<T>& coll) {
  typedef std::map<std::string, std::vector<T> > Map;
  std::pair<typename Map::iterator, bool> ins = colls.insert(make_pair(name, coll));
  if(!ins.second) {
    cout << "Unable to insert " << MyEventTraits<T>::name() << " collection " << name << ".";
    if(colls.find(name) != colls.end())
      cout << " A collection with the same name already exists.";
    cout << endl;
    exit(0);
  }
  return ins.first->second;
}

template <typename T>
std::vector<T *> getCollectionTmpl(std::map<std::string, std::vector<T> >& colls, const std::string& name) {
  typedef std::map<std::string, std::vector<T> > Map;
  typename Map::iterator found = colls.find(name);
  if(found == colls.end()) {
    const char *cl = MyEventTraits<T>::name();
    cout << "Requested " << cl << " collection " << name << " which doesn't exist." << endl
         << "The following " << cl << " collections exist:" << std::endl;
    for(typename Map::const_iterator iter = colls.begin(); iter != colls.end(); ++iter) {
      std::cout << "  " << iter->first << std::endl;
    }
    exit(0);
  }
  return convertCollection(found->second);
}





ClassImp(MyEvent)

MyEvent::MyEvent(): hasMCdata(false) {
  /**
   * I guess this only sets the ownership of the keys (in both 5.18
   * and 5.22). As I'm being lazy and don't want to exercise with ROOT
   * version checking macros, I advise to use the TMap::DeleteAll() to
   * clear the contents of the map since it's supposed to delete both
   * the keys and the values.    - Matti 2009-07-15
   */
  extraObjects.SetOwner();
}

MyEvent::~MyEvent() {}

MyEvent::MyEvent(const MyEvent& event):
  collections(event.collections),
  mets(event.mets),
  triggerResults(event.triggerResults),
  primaryVertex(event.primaryVertex),
  mcCollections(event.mcCollections),
  simTracks(event.simTracks),
  mcPrimaryVertex(event.mcPrimaryVertex),
  extraObjects(),
  eventNumber(event.eventNumber),
  runNumber(event.runNumber),
  lumiNumber(event.lumiNumber),
  hasMCdata(event.hasMCdata) {
  event.extraObjects.Copy(extraObjects);
}

bool MyEvent::hasCollection(const string& name) const {
  CollectionMap::const_iterator found = collections.find(name);
  return found != collections.end();
}

std::vector<MyJet *> MyEvent::getCollection(const string& name) {
  CollectionMap::iterator found = findCollection(collections, name, "MyJet collection");
  return convertCollection(found->second);
}

std::vector<MyJet *> MyEvent::getCollectionWithCorrection(const string& name, const std::string& corr) {
  std::vector<MyJet *> coll(getCollection(name));
  ::useCorrection(coll, corr);
  return coll;
}

std::vector<MyJet>& MyEvent::addCollection(const string& name, const vector<MyJet>& coll) {
  return addCollectionTmpl(collections, name, coll);
}

std::vector<MyJet>& MyEvent::addCollection(const std::string& name) {
  return addCollection(name, std::vector<MyJet>());
}

void MyEvent::setJetEnergyScale(const std::string& name, double energyScale) {
  CollectionMap::iterator found = findCollection(collections, name, "MyJet collection");
  for(JetCollection::iterator jet = found->second.begin(); jet != found->second.end(); ++jet) {
    jet->originalP4 *= energyScale;
    jet->setP4(jet->originalP4);
  }
}

bool MyEvent::hasMET(const string& name) const {
  METMap::const_iterator found = mets.find(name);
  return found != mets.end();
}

MyMET *MyEvent::getMET(const string& name) {
  METMap::iterator found = findCollection(mets, name, "MyMET object");
  found->second.name = found->first;
  return &(found->second);
}

void MyEvent::addMET(const string& name, const MyMET& met) {
  pair<METMap::iterator, bool> ins = mets.insert(make_pair(name, met));
  if(!ins.second) {
    cout << "Unable to insert MET " << name << ".";
    if(mets.find(name) != mets.end())
      cout << " A MET object with the same name already exists.";
    cout << endl;
    exit(0);
  }
}


bool MyEvent::hasTrigger(const string& name) const {
  TriggerMap::const_iterator found = triggerResults.find(name);
  return found != triggerResults.end();
}

bool MyEvent::trigger(const string& name) const {
  TriggerMap::const_iterator found = findCollection(triggerResults, name, "trigger");
  return found->second;
}

void MyEvent::addTrigger(const string& name, bool passed) {
  pair<TriggerMap::iterator, bool> ins = triggerResults.insert(make_pair(name, passed));
  if(!ins.second) {
    cout << "Unable to insert trigger " << name << ".";
    if(triggerResults.find(name) != triggerResults.end())
      cout << " A trigger bit with the same name already exists.";
    cout << endl;
    exit(0);
  }
}

MyGlobalPoint *MyEvent::getPrimaryVertex() {
  return &primaryVertex;
}



bool MyEvent::hasMCinfo() const {
  return hasMCdata;
}

MyGlobalPoint *MyEvent::getMCPrimaryVertex() {
  if(!hasMCdata) {
    cout << "Requested MC primary vertex, but MC info is not available." << endl;
    exit(0);
  }
  return &mcPrimaryVertex;
}

std::vector<MyMCParticle>& MyEvent::addMCParticles(const string& name) {
  std::vector<MyMCParticle> coll;
  return addCollectionTmpl(mcCollections, name, coll);
}

std::vector<MyMCParticle *> MyEvent::getMCParticles(const std::string& name) {
  if(!hasMCdata) {
    cout << "Requested MC particles, but MC info is not available." << endl;
    exit(0);
  }
  return getCollectionTmpl(mcCollections, name);
}

MyMET *MyEvent::getMCMET() {
  if(!hasMCdata) {
    cout << "Requested MC MET, but MC info is not available." << endl;
    exit(0);
  }
  return &mcMET;
}
/*
bool MyEvent::addMCMET(const MyMET& mcmet) {
	mcMET = mcmet;
	return true;
}
*/
std::vector<MySimTrack *> MyEvent::getSimTracks() {
  if(!hasMCdata) {
    cout << "Requested simulated tracks, but MC info is not available." << endl;
    exit(0);
  }
  return convertCollection(simTracks);
}



bool MyEvent::hasExtraObject(const std::string& name) const {
  return extraObjects.FindObject(name.c_str()) != 0;
}

TObject *MyEvent::getExtraObject(const std::string& name) {
  TObject *obj = extraObjects.GetValue(name.c_str());
  if(!obj) {
    cout << "Requested extra object " << name << " which doesn't exist." << endl;
    exit(0);
  }
  return obj;
}

void MyEvent::addExtraObject(const std::string& name, TObject *obj) {
  if(hasExtraObject(name)) {
    delete obj;
    cout << "Unable to insert extra object " << name << " of type " << obj->ClassName()
         << " . An object of type " << obj->ClassName() << " with the same name already exists." << endl;
    exit(0);
  }

  extraObjects.Add(new TObjString(name.c_str()), obj);
}


unsigned int MyEvent::event() const {
  return eventNumber;
}

unsigned int MyEvent::run() const {
  return runNumber;
}

unsigned int MyEvent::lumiSection() const {
  return lumiNumber;
}

void MyEvent::printSummary(std::ostream& out) const {
  out << "Run " << setw(8) << runNumber
      << ", event " << setw(8) << eventNumber
      << ", lumiSection " << setw(8) << lumiNumber;
  for(CollectionMap::const_iterator iter = collections.begin(); iter != collections.end(); ++iter) {
    out << ", " << iter->first << ": " << setw(2) << iter->second.size();
  }
  for(McCollectionMap::const_iterator iter = mcCollections.begin(); iter != mcCollections.end(); ++iter) {
    out << ", MC " << iter->first << ": " << setw(2) << iter->second.size();
  }
  out << endl;
}

void MyEvent::printCorrections(std::ostream& out) const {
  for(CollectionMap::const_iterator iter = collections.begin(); iter != collections.end(); ++iter) {
    if(iter->second.size() > 0) {
      out << "  Energy corrections of collection " << iter->first << endl;
      iter->second[0].printCorrections();
    }
  }
}

void MyEvent::printReco(std::ostream& out) const {
  printSummary(out);

  if(triggerResults.size() > 0) {
    out << "  Trigger" << endl;
    for(TriggerMap::const_iterator iter = triggerResults.begin(); iter != triggerResults.end(); ++iter) {
      out << "           " << iter->first << " " << iter->second << endl;
    }
  }
  
  for(CollectionMap::const_iterator iter = collections.begin(); iter != collections.end(); ++iter) {
    out << "  Collection " << iter->first << endl;
    for(JetCollection::const_iterator part = iter->second.begin(); part != iter->second.end(); ++part) {
      out << "    type = " << part->type
          << ", Et = " << part->Et()
          << ", eta = " << part->eta()
          << ", phi = " << part->phi()
          << ", tracks = " << part->tracks.size() << endl;
      part->print();
    }
  }

  for(METMap::const_iterator iter = mets.begin(); iter != mets.end(); ++iter) {
    out << "  MET " << iter->first << " = " << iter->second.value() << endl;
  }

  if(extraObjects.GetSize() > 0) {
    out << "  Extra objects " << endl;

    TIterator *iter = extraObjects.MakeIterator();
    TObject *obj = 0;
    while((obj = iter->Next())) {
      TPair *pair = dynamic_cast<TPair *>(obj);
      if(!pair)
        continue;
      out << "    " << pair->Key()->GetName() << " of type " << pair->Value()->ClassName() << endl;
    }
  }
}

void MyEvent::printAll(std::ostream& out) const {
  printReco(out);

  if(mcCollections.size() > 0) {
    for(McCollectionMap::const_iterator iter = mcCollections.begin(); iter != mcCollections.end(); ++iter) {
      const McCollection& mcParticles(iter->second);
      out << " MC particle collection " << iter->first << " " << mcParticles.size() << endl;
      for(vector<MyMCParticle>::const_iterator i = mcParticles.begin(); i!= mcParticles.end(); i++){
        out << "    pid = " << i->pid
            << ", Et = " << i->pt()
            << ", eta = " << i->eta()
            << ", phi = " << i->phi() << endl;
      }
    }
  }
}
