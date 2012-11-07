import FWCore.ParameterSet.Config as cms
from HiggsAnalysis.HeavyChHiggsToTauNu.HChOptions import getOptions
from HiggsAnalysis.HeavyChHiggsToTauNu.HChDataVersion import DataVersion
import FWCore.ParameterSet.VarParsing as VarParsing

dataVersion = "44XmcS6"
#dataVersion = "42Xdata"g

options = getOptions()
if options.dataVersion != "":
    dataVersion = options.dataVersion
# ALWAYS run PAT, and trigger also MC
options.doPat=1
options.triggerMC = 1

print "Assuming data is ", dataVersion
dataVersion = DataVersion(dataVersion) # convert string to object

process = cms.Process("MUONSKIM")

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1000) )

process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
process.GlobalTag.globaltag = cms.string(dataVersion.getGlobalTag())

process.source = cms.Source('PoolSource',
    fileNames = cms.untracked.vstring(
        #dataVersion.getPatDefaultFileCastor()
        #dataVersion.getPatDefaultFileMadhatter()
        "file:/mnt/flustre/wendland/AODSIM_PU_S6_START44_V9B_7TeV/Fall11_TTJets_TuneZ2_7TeV-madgraph-tauola_AODSIM_PU_S6_START44_V9B-v1_testfile.root"
    )
)

################################################################################

trigger = options.trigger
# Default trigger (for MC)
if len(trigger) == 0:
    trigger = "HLT_Mu40_eta2p1_v1" # Fall11; other HLT_Mu20_v8, HLT_Mu40_v6 or HLT_Mu40_eta2p1_v1
    options.trigger = trigger
print "trigger:", trigger

process.load("HiggsAnalysis.HeavyChHiggsToTauNu.HChCommon_cfi")
process.MessageLogger.cerr.FwkReport.reportEvery = 5000
del process.TFileService
#process.options = cms.untracked.PSet(wantSummary = cms.untracked.bool(True))

# Output module
process.out = cms.OutputModule("PoolOutputModule",
    SelectEvents = cms.untracked.PSet(
        SelectEvents = cms.vstring("path")
#        SelectEvents = cms.vstring("PFlowMuonsPath", "PFlowChsMuonsPath")
    ),
    fileName = cms.untracked.string('skim.root'),
    outputCommands = cms.untracked.vstring(
        "keep *",
        "drop *_MEtoEDMConverter_*_*", # drop DQM histos
        "drop *_*_*_MUONSKIM",
        "keep *_tightMuons*_*_MUONSKIM",
        "keep *_goodJets*_*_MUONSKIM",
    )
)

process.selectionSequence = cms.Sequence()

from HiggsAnalysis.HeavyChHiggsToTauNu.HChPatTuple import addPatOnTheFly
patArgs = {"doTauHLTMatching": False,
           }
process.commonSequence, additionalCounters = addPatOnTheFly(process, options, dataVersion, patArgs=patArgs,
                                                            doHBHENoiseFilter=False, # Only save the HBHE result to event, don't filter
)
# In order to avoid transient references and generalTracks is available anyway
#if hasattr(process, "patMuons"):
#    process.patMuons.embedTrack = False
#    process.patMuonsPFlow.embedTrack = False
#    process.patMuonsPFlowChs.embedTrack = False

# Override the outputCommands here, since PAT modifies it
# process.load("HiggsAnalysis.HeavyChHiggsToTauNu.tauEmbedding.HChEventContent_cff")
# process.out.outputCommands = cms.untracked.vstring(
# )
# import re
# name_re = re.compile("_\*$")
# process.out.outputCommands.extend([name_re.sub("_MUONSKIM", x) for x in process.HChEventContent.outputCommands])

# Drop some totally unnecessary products
process.out.outputCommands.extend([
        "drop *_towerMaker_*_*",
        "drop *_hltTriggerSummaryAOD_*_*",
        "drop *_reducedEcalRecHits*_*_*",
        "drop *_multi5x5SuperClusters_*_*",
        "drop recoPFJets_*_*_*",
        "drop recoCaloJets_*_*_*",
        "drop recoJPTJets_*_*_*",
        "drop recoTrackJets_*_*_*",
        "drop *_kt4JetID_*_*",
        "drop *_kt6JetID_*_*",
        "drop *_ak7JetID_*_*",
        "drop *_kt4GenJets_*_*",
        "drop *_kt6GenJets_*_*",
        "drop *_ak7GenJets_*_*",
        "drop *_kt4JetExtender_*_*",
        "drop *_ak7JetExtender_*_*",
        "drop *_ak7JetTracksAssociatorAtVertex_*_*",
        "drop recoPFTaus_*_*_*",
        "drop recoCaloTaus_*_*_*",
#        "drop recoMuons_*_*_*", # needed for type I/II MET
        "drop recoGsfElectrons_*_*_*",
#        "drop recoGsfTracks_*_*_*", # needed for tau ID
        "drop recoPhotons_*_*_*",

        "drop *_hltL1GtObjectMap_*_*",
        "drop recoDeDxDataedmValueMap_*_*_*",
        "drop recoSuperClusters_*_*_*",
        "drop recoCaloClusters_*_*_*",
        "drop recoPreshowerClusters_*_*_*",
        "drop *_castorreco_*_*",
        "drop *_CastorTowerReco_*_*",
        "drop *_reducedHcalRecHits_*_*",

        "drop *_trackExtrapolator_*_*",
#        "drop *_standAloneMuons_*_*", # reco::Tracks from standAloneMuons are needed for PF isolation (don't know for other objects)
        "drop *_conversionStepTracks_*_*",
        "drop recoIsoDepositedmValueMap_*_*_*",
        "drop recoCastorJetIDedmValueMap_*_*_*",
        "drop recoPFTauDiscriminator_*_*_*",
        "drop l1extra*_*_*_*",

        "drop *_ak5JetID_*_*",
        "drop *_ak5JetExtender_*_*",
        "drop *_ak5JetTracksAssociatorAtVertex_*_*",
        "drop *_muonsFromCosmics_*_*",
        "drop *_muonsFromCosmics1Leg_*_*",
        "drop *_uncleanedOnlyAllConversions_*_*",
        "drop recoCaloTauTagInfos_*_*_*",
        "drop *_generalV0Candidates_*_*",
     
        
        
])

import HiggsAnalysis.HeavyChHiggsToTauNu.tauEmbedding.muonSelectionPF as muonSelection
process.muonSelectionSequence = muonSelection.addMuonSelectionForEmbedding(process)
process.path = cms.Path(
    process.commonSequence *
    process.muonSelectionSequence
)

# JER, JES variations
if dataVersion.isMC():
    jetSelectionModules = [process.goodJets, process.goodJetFilter, process.muonSelectionJets]
    for m in jetSelectionModules:
        process.muonSelectionSequence.remove(m)
        process.path *= m
    jetCollections = [
        ("Smeared", "smearedPatJets"),
        ("ResDown", "smearedPatJetsResDown"),
        ("ResUp",   "smearedPatJetsResUp"),
        ("EnDown",  "shiftedPatJetsEnDownForCorrMEt"),
        ("EnUp",    "shiftedPatJetsEnUpForCorrMEt"),
        ]
    for postfix, src in jetCollections:
        path = cms.Path(
            process.commonSequence *
            process.muonSelectionSequence
        )
        name = "path"+postfix
        setattr(process, name, path)
        process.out.SelectEvents.SelectEvents.append(name)
    
        m = process.goodJets.clone(
            src = src
        )
        name = "goodJets"+postfix
        setattr(process, name, m)
        path *= m
    
        m = process.goodJetFilter.clone(
            src = name
        )
        name = "goodJetFilter"+postfix
        setattr(process, name, m)
        path *= m
    
        m = process.muonSelectionJets.clone()
        name = "muonSelectionJets"+postfix
        setattr(process, name, m)
        path *= m


# For PF2PAT
# process.muonSelectionSequencePFlow = muonSelection.addMuonSelectionForEmbedding(process, "PFlow")
# process.PFlowMuonsPath = cms.Path(
#     process.commonSequence *
#     process.muonSelectionSequencePFlow
# )
# process.muonSelectionSequencePFlowChs = muonSelection.addMuonSelectionForEmbedding(process, "PFlowChs")
# process.PFlowChsMuonsPath = cms.Path(
#     process.commonSequence *
#     process.muonSelectionSequencePFlowChs
# )

process.endPath = cms.EndPath(
    process.out
)

#process.counters = cms.EDAnalyzer("HPlusEventCountAnalyzer",
#    printMainCounter = cms.untracked.bool(True),
#    printAvailableCounters = cms.untracked.bool(True),
#)
#process.path *= process.counters
