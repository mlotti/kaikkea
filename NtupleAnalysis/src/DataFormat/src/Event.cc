#include "DataFormat/interface/Event.h"

#include "boost/optional.hpp"

#include <stdexcept>

Event::Event():
  fGenMET("GenMET"),
  fMET_Type1("MET_Type1")
{}
Event::Event(const boost::property_tree::ptree& config): Event() {
  bool variationAssigned = false;

  boost::optional<std::string> jetSyst = config.get_optional<std::string>("JetSelection.systematicVariation");
  if(jetSyst) {
    fJetCollection.setEnergySystematicsVariation(*jetSyst);
    fMET_Type1.setEnergySystematicsVariation(*jetSyst);
    variationAssigned = true;
  }

  boost::optional<std::string> tauSyst = config.get_optional<std::string>("TauSelection.systematicVariation");
  if(tauSyst) {
    if(variationAssigned) {
      throw std::runtime_error("Trying to set systematicVariation for taus, but a variation has already been set for jets! Only one variation per analyzer is allowed");
    }
    fTauCollection.setEnergySystematicsVariation(*tauSyst);
    fMET_Type1.setEnergySystematicsVariation(*tauSyst);
    variationAssigned = true;
  }
}
Event::~Event() {}

void Event::setupBranches(BranchManager& mgr) {
  fEventID.setupBranches(mgr);
  fTauCollection.setupBranches(mgr);
  fJetCollection.setupBranches(mgr);
  fMuonCollection.setupBranches(mgr);
  fElectronCollection.setupBranches(mgr);
  fGenMET.setupBranches(mgr);
  fMET_Type1.setupBranches(mgr);
}