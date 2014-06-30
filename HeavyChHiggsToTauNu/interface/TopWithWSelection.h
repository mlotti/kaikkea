// -*- c++ -*-
#ifndef HiggsAnalysis_HeavyChHiggsToTauNu_TopWithWSelection_h
#define HiggsAnalysis_HeavyChHiggsToTauNu_TopWithWSelection_h

#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/TopSelectionBase.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "DataFormats/Common/interface/Ptr.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/EventCounter.h"

namespace edm {
  class Event;
  class EventSetup;
  class ParameterSet;
}

namespace HPlus {
  class TopWithWSelection: public TopSelectionBase {
  typedef TopSelectionBase::Data Data;
  
  public:
    TopWithWSelection(const edm::ParameterSet& iConfig, EventCounter& eventCounter, HistoWrapper& histoWrapper);
    ~TopWithWSelection();

  private:
    Data privateAnalyze(const edm::Event& iEvent, const edm::EventSetup& iSetup, const edm::PtrVector<pat::Jet>& jets, const edm::Ptr<pat::Jet> bjet);
    void init();
    
    // Input parameters
    const double fTopMassLow;
    const double fTopMassHigh;
    const double fChi2Cut;

    // Counters
    //Count fTopWithWMassCount;

    edm::InputTag fSrc;
    
    // Histograms
    
    WrappedTH1* htopPt;
    WrappedTH1* htopMass;
    WrappedTH1* htopEta;
    WrappedTH1* htopPtAfterCut;
    WrappedTH1* htopMassAfterCut; 
    WrappedTH1* htopEtaAfterCut;
    WrappedTH1* htopMassRejected;
    WrappedTH1* hWPt;
    WrappedTH1* hWMass;
    WrappedTH1* hWEta;
    WrappedTH1* hWPtAfterCut;
    WrappedTH1* hWMassAfterCut;
    WrappedTH1* hWEtaAfterCut;   
    WrappedTH1* hdeltaPhi_Wb;
    WrappedTH1* hdeltaR_Wb;
    WrappedTH1* hdeltaPhi_jets;
    WrappedTH1* hdeltaR_jets; 
    WrappedTH1* htopPt_match;
    WrappedTH1* hWPt_match;
    WrappedTH1* hdeltaPhi_Wb_match;
    WrappedTH1* hdeltaR_Wb_match;
    WrappedTH1* hdeltaPhi_jets_match;
    WrappedTH1* hdeltaR_jets_match; 
    WrappedTH1* hjjMass;
    WrappedTH1* htopMassMatch;
    WrappedTH1* hWMassMatch;
    WrappedTH1* hChi2Min;
    WrappedTH1* htopMassBMatch;
    WrappedTH1* hWMassBMatch;
    WrappedTH1* htopMassQMatch;
    WrappedTH1* hWMassQMatch;
    WrappedTH1* htopMassMatchWrongB;
    WrappedTH1* hWMassMatchWrongB;

  };
}

#endif
