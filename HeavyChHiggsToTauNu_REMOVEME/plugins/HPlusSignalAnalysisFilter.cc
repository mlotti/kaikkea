#include "FWCore/Framework/interface/EDFilter.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/EventCounter.h"
#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/EventWeight.h"
#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/HistoWrapper.h"
#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/SignalAnalysis.h"

class HPlusSignalAnalysisFilter: public edm::EDFilter {
 public:

  explicit HPlusSignalAnalysisFilter(const edm::ParameterSet&);
  ~HPlusSignalAnalysisFilter();

 private:
  virtual void beginJob();
  virtual bool filter(edm::Event& iEvent, const edm::EventSetup& iSetup);
  virtual void endJob();

  virtual bool endLuminosityBlock(edm::LuminosityBlock& iBlock, const edm::EventSetup & iSetup);

  HPlus::EventWeight eventWeight;
  HPlus::HistoWrapper histoWrapper;
  HPlus::EventCounter eventCounter;
  HPlus::SignalAnalysis analysis;
};

HPlusSignalAnalysisFilter::HPlusSignalAnalysisFilter(const edm::ParameterSet& pset):
  eventWeight(pset),
  histoWrapper(eventWeight, pset.getUntrackedParameter<std::string>("histogramAmbientLevel")),
  eventCounter(pset, eventWeight, histoWrapper),
  analysis(pset, eventCounter, eventWeight, histoWrapper)
{
  analysis.produces(this);
}
HPlusSignalAnalysisFilter::~HPlusSignalAnalysisFilter() {}
void HPlusSignalAnalysisFilter::beginJob() {}

bool HPlusSignalAnalysisFilter::endLuminosityBlock(edm::LuminosityBlock& iBlock, const edm::EventSetup & iSetup) {
  eventCounter.endLuminosityBlock(iBlock, iSetup);
  return true;
}

bool HPlusSignalAnalysisFilter::filter(edm::Event& iEvent, const edm::EventSetup& iSetup) {
  return analysis.filter(iEvent, iSetup);
}

void HPlusSignalAnalysisFilter::endJob() {
  eventCounter.endJob();
}

//define this as a plug-in
DEFINE_FWK_MODULE(HPlusSignalAnalysisFilter);
