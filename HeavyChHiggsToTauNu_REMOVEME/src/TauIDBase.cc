#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/TauIDBase.h"
#include "HiggsAnalysis/HeavyChHiggsToTauNu/interface/HistoWrapper.h"

#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"

#include <sstream>
#include <iomanip>

namespace HPlus {
  TauIDBase::TauIDBase(const edm::ParameterSet& iConfig, HPlus::EventCounter& eventCounter, HPlus::HistoWrapper& histoWrapper, const std::string& baseLabel, TFileDirectory& myDir):
    fMyDir(myDir),
    fVertexZCut(0.2), // Tolerance for abs(vertexZ - tau IPz) in cm
    fPtCut(iConfig.getUntrackedParameter<double>("ptCut")),
    fEtaCut(iConfig.getUntrackedParameter<double>("etaCut")),
    fLeadTrkPtCut(iConfig.getUntrackedParameter<double>("leadingTrackPtCut")),
    fAgainstElectronDiscriminator(iConfig.getUntrackedParameter<std::string>("againstElectronDiscriminator")),
    fApplyVetoForDeadECALCells(iConfig.getUntrackedParameter<bool>("applyVetoForDeadECALCells")),
    fDeadECALCellsDeltaR(iConfig.getUntrackedParameter<double>("deadECALCellsDeltaR")),
    fAgainstMuonDiscriminator(iConfig.getUntrackedParameter<std::string>("againstMuonDiscriminator")),
    fProngCount(iConfig.getUntrackedParameter<uint32_t>("nprongs")),
    fIsolationDiscriminator(iConfig.getUntrackedParameter<std::string>("isolationDiscriminator")),
    fIsolationDiscriminatorContinuousCutPoint(iConfig.getUntrackedParameter<double>("isolationDiscriminatorContinuousCutPoint")),
    fRtauCut(iConfig.getUntrackedParameter<double>("rtauCut")),
    fCounterPackager(eventCounter)
  {
    // Check that input parameters are valid
    if (fProngCount != 1 && fProngCount != 3 && fProngCount != 13) {
      throw cms::Exception("Configuration") << "TauSelection/" << baseLabel << ": invalid prong number (" << fProngCount << " requested! Options are 1, 3, and 13 (for both 1 and 3 prongs)" << std::endl;
    }
    
    // contstuct base label suffix
    std::stringstream mySuffix;
    mySuffix << baseLabel << "_" << fIsolationDiscriminator;
    if (fIsolationDiscriminatorContinuousCutPoint > 0)
      mySuffix << std::setprecision(2) << fIsolationDiscriminatorContinuousCutPoint;
    if (fRtauCut > 0)
      mySuffix << "_Rtau" << std::setprecision(2) << fRtauCut;
    else
      mySuffix << "_noRtau";
    fBaseLabel = mySuffix.str();
    
    // Histograms
    hEtaTauCands_nocut = histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir,
      "hEtaTauCands_nocuts",
      "hEtaTauCands_nocuts;#tau #eta;N_{jets} / 0.1",60, -3., 3.);
    hEtaTauCands_ptcut = histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir,
      "hEtaTauCands_ptcut",
      "hEtaTauCands_ptcut;#tau #eta;N_{jets} / 0.1",60, -3., 3.);
    
    // Initialize counter objects for tau candidate selection
    WrappedTH1* myZeroHisto = 0;
    fIDAllTauCandidates = fCounterPackager.addSubCounter(baseLabel, "AllTauCandidates", myZeroHisto);
    fIDDecayModeFinding = fCounterPackager.addSubCounter(baseLabel,"DecayModeFinding",
      histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir, "TauCand_DecayModeFinding", "DecayModeFinding;DecayMode;N_{jets}", 30, 0, 30));
    fIDVertexZCut = fCounterPackager.addSubCounter(baseLabel, "VertexZCut",
      histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir, "TauCand_VertexZCut", "tau IPz vs vertexZ;#tau IP_{z} - vertex_{Z} / cm;N_{jets} / 0.1 cm", 100, -5.0, 5.0));
    fIDJetPtCut = fCounterPackager.addSubCounter(baseLabel, "TauJetPt",
      histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir, "TauCand_JetPt", "TauJetPt;#tau jet p_{T}, GeV/c;N_{jets} / 5 GeV/c", 80, 0., 400.));
    fIDJetEtaCut = fCounterPackager.addSubCounter(baseLabel, "TauJetEta",
      histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir, "TauCand_JetEta", "TauJetEta;#tau jet #eta;N_{jets} / 0.1", 60, -3., 3.));
    fIDLdgTrackExistsCut = fCounterPackager.addSubCounter(baseLabel, "TauLdgTrackExists", myZeroHisto);
    fIDLdgTrackPtCut = fCounterPackager.addSubCounter(baseLabel, "TauLdgTrackPtCut",
      histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir, "TauCand_LdgTrackPtCut", "TauLdgTrackPtCut;#tau leading track, GeV/c; N_{jets} / 2 GeV/c", 100, 0., 200.));
    fIDECALFiducialCutCracksOnly = fCounterPackager.addSubCounter(baseLabel, "TauECALFiducialCutsCracks", myZeroHisto);
    fIDECALFiducialCut = fCounterPackager.addSubCounter(baseLabel, "TauECALFiducialCutsCracksAndGap", myZeroHisto);
    fIDAgainstElectronCut = fCounterPackager.addSubCounter(baseLabel, "TauAgainstElectronCut", myZeroHisto);
    fIDAgainstMuonCut = fCounterPackager.addSubCounter(baseLabel, "TauAgainstMuonCut", myZeroHisto);
    fVetoAgainstDeadECALCells = fCounterPackager.addSubCounter(baseLabel, "VetoAgainstDeadECALCells", myZeroHisto);
    // Initialize counter objects for tau identification
    fIDIsolationCut = fCounterPackager.addSubCounter(baseLabel, "TauIsolation", myZeroHisto);
    fIDNProngsCut = fCounterPackager.addSubCounter(baseLabel, "TauProngCut",
      histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir, "TauID_NProngsCut", "TauNProngsCut;N_{#tau prong};N_{jets}", 10, 0., 10.));
    fIDRTauCut = fCounterPackager.addSubCounter(baseLabel, "TauRtauCut",
      histoWrapper.makeTH<TH1F>(HistoWrapper::kInformative, fMyDir, "TauID_RtauCut", "TauRtauCut;R_{#tau}=p^{ldg.track}/E^{vis.#tau jet};N_{jets} / 0.02", 60, 0., 1.2));
    // Histograms
    hRtauVsEta = histoWrapper.makeTH<TH2F>(HistoWrapper::kInformative, fMyDir, "TauID_RtauDetail_RtauVsEta", "RtauVsEta;R_{#tau};#tau eta", 60, 0.0, 1.2, 60, -3., 3.);
  }

  TauIDBase::~TauIDBase() { }

  void TauIDBase::incrementAllCandidates() {
    fCounterPackager.incrementSubCount(fIDAllTauCandidates);
  }

  bool TauIDBase::passVertexZCut(const edm::Ptr<pat::Tau> tau, double vertexZ) {
    // Distance between tau IPz and vertex Z in cm
    double myDelta = tau->vz() - vertexZ;
    fCounterPackager.fill(fIDVertexZCut, myDelta);
    if (!(std::abs(myDelta) < fVertexZCut)) return false;
    fCounterPackager.incrementSubCount(fIDVertexZCut);
    return true;
  }

  bool TauIDBase::passKinematicSelection(const edm::Ptr<pat::Tau> tau) {
    // Jet pt cut
    double myJetPt = tau->pt();
    double myJetEta = tau->eta();
    fCounterPackager.fill(fIDJetPtCut, myJetPt);
    if(!passKinematicSelectionPt(tau)) return false;

    hEtaTauCands_ptcut->Fill(myJetEta);
    // Jet eta cut
    if(!passKinematicSelectionEta(tau)) return false;

    // All cuts passed, return true
    return true;
  }
  bool TauIDBase::passKinematicSelectionPt(const edm::Ptr<pat::Tau>& tau) {
    double myJetPt = tau->pt();
    if(!(myJetPt > fPtCut)) return false;
    fCounterPackager.incrementSubCount(fIDJetPtCut);
    return true;
  }
  bool TauIDBase::passKinematicSelectionEta(const edm::Ptr<pat::Tau>& tau) {
    double myJetEta = tau->eta();
    fCounterPackager.fill(fIDJetEtaCut, myJetEta);
    if(!(std::abs(myJetEta) < fEtaCut)) return false;
    fCounterPackager.incrementSubCount(fIDJetEtaCut);
    return true;
  }
 
  bool TauIDBase::passTauCandidateEAndMuVetoCuts(const edm::Ptr<pat::Tau> tau) {
    // Electron veto
    if(!passTauCandidateEVetoCuts(tau)) return false;
    // Muon veto
    if(!passTauCandidateMuVetoCuts(tau)) return false;
    // All cuts passed, return true
    return true;
  }
  bool TauIDBase::passTauCandidateEVetoCuts(const edm::Ptr<pat::Tau>& tau) {
    // Electron veto
    if (tau->tauID(fAgainstElectronDiscriminator) < 0.5) return false;
    fCounterPackager.incrementSubCount(fIDAgainstElectronCut);
    return true;
  }
  bool TauIDBase::passTauCandidateMuVetoCuts(const edm::Ptr<pat::Tau>& tau) {
    // Muon veto
    if (tau->tauID(fAgainstMuonDiscriminator) < 0.5) return false;
    fCounterPackager.incrementSubCount(fIDAgainstMuonCut);
    return true;
  }

  bool TauIDBase::passVetoAgainstDeadECALCells(const edm::Ptr<pat::Tau> tau) {
    if (!fApplyVetoForDeadECALCells) {
      fCounterPackager.incrementSubCount(fVetoAgainstDeadECALCells);
      return true;
    }
    bool myStatus = fDeadECALCells.ObjectHitsDeadECALCell(tau,fDeadECALCellsDeltaR);
    if (myStatus) fCounterPackager.incrementSubCount(fVetoAgainstDeadECALCells);
    return myStatus;
  }

  bool TauIDBase::passIsolation(const edm::Ptr<pat::Tau> tau) {
    // If no continuous cut point was set, set the default cut point for discrete discriminator
    if (fIsolationDiscriminatorContinuousCutPoint < 0) {
      if (tau->tauID(fIsolationDiscriminator) < 0.5)
        return false;
    } else if (tau->tauID(fIsolationDiscriminator) > fIsolationDiscriminatorContinuousCutPoint)
      return false;
    fCounterPackager.incrementSubCount(fIDIsolationCut);
    return true;
  }

  bool TauIDBase::passAntiIsolation(const edm::Ptr<pat::Tau> tau) {
    if (fIsolationDiscriminatorContinuousCutPoint < 0) {
      if (tau->tauID(fIsolationDiscriminator) > 0.5)
        return false;
    } else if (tau->tauID(fIsolationDiscriminator) < fIsolationDiscriminatorContinuousCutPoint)
      return false;
    fCounterPackager.incrementSubCount(fIDIsolationCut);
    return true;
  }

  bool TauIDBase::passECALFiducialCuts(const edm::Ptr<pat::Tau> tau) {
    double myEta = std::abs(tau->eta());
    // true, if eta is in ECAL crack
    bool myECALCrackStatus = (myEta < 0.018 ||
                              (myEta>0.423 && myEta<0.461) ||
                              (myEta>0.770 && myEta<0.806) ||
                              (myEta>1.127 && myEta<1.163));
    if (myECALCrackStatus) return false;
    fCounterPackager.incrementSubCount(fIDECALFiducialCutCracksOnly);
    // true, if eta is in ECAL gap
    bool myECALGapStatus = (myEta>1.460 && myEta<1.558);
    if (myECALGapStatus) return false;
    fCounterPackager.incrementSubCount(fIDECALFiducialCut);
    // All cuts passed, return true
    return true;
  }

  void TauIDBase::reset() {
    fCounterPackager.reset();
  }
  
  void TauIDBase::updatePassedCounters() {
    fCounterPackager.incrementPassedCounters();
  }
}
