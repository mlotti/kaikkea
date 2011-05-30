import FWCore.ParameterSet.Config as cms
from HiggsAnalysis.HeavyChHiggsToTauNu.HChOptions import getOptionsDataVersion

################################################################################
# Configuration

# Select the version of the data (needed only for interactice running,
# overridden automatically from multicrab
#dataVersion = "39Xredigi" # Winter10 MC
#dataVersion = "39Xdata"   # Run2010 Dec22 ReReco
#dataVersion = "311Xredigi" # Spring11 MC
dataVersion = "41Xdata"   # Run2011 PromptReco


##########
# Flags for additional alphat analysis modules
# Perform the alphat analysis with all tau ID algorithms in addition
# to the "golden" analysis
doAllTauIds = False

# Perform b tagging scanning
doBTagScan = False

# Perform the alphat analysis with the JES variations in addition to
# the "golden" analysis
doJESVariation = False
JESVariation = 0.03
JESEtaVariation = 0.02
JESUnclusteredMETVariation = 0.10

# With tau embedding input, tighten the muon selection
tauEmbeddingFinalizeMuonSelection = False
# With tau embedding input, do the muon selection scan
doTauEmbeddingMuonSelectionScan = False
# Do tau id scan for tau embedding normalisation (no tau embedding input required)
doTauEmbeddingTauSelectionScan = False

# Do trigger parametrisation for MC and tau embedding
doTriggerParametrisation = False

filterGenTaus = False
filterGenTausInaccessible = False

################################################################################

# Command line arguments (options) and DataVersion object
options, dataVersion = getOptionsDataVersion(dataVersion)

# These are needed for running against tau embedding samples, can be
# given also from command line
#options.doPat=1
#options.tauEmbeddingInput=1

################################################################################
# Define the process
process = cms.Process("HChAlphatAnalysis")

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
#process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1000) )

process.source = cms.Source('PoolSource',
    fileNames = cms.untracked.vstring(
  #"rfio:/castor/cern.ch/user/a/attikis/pattuples/testing/v11/ttjets_mc_pattuple_9_1_BRC.root"
    #"rfio:/castor/cern.ch/user/a/attikis/pattuples/testing/v11/pattuple_9_1_ZS7.root"
    "file:/media/disk/attikis/PATTuples/v11/pattuple_9_1_ZS7.root"
    #"rfio:/castor/cern.ch/user/a/attikis/pattuples/testing/v10/pattuple_5_1_g68.root"
    # "file:/afs/cern.ch/user/a/attikis/scratch0/CMSSW_4_1_4/src/HiggsAnalysis/HeavyChHiggsToTauNu/test/pattuple_5_1_g68.root"
    # "file:/media/disk/attikis/PATTuples/3683D553-4C4E-E011-9504-E0CB4E19F9A6.root"
    # "rfio:/castor/cern.ch/user/w/wendland/test_pattuplev9_signalM120.root"
    # "file:/media/disk/attikis/PATTuples/v9_1/test_pattuple_v9_JetMet2010A_86.root"
    # "rfio:/castor/cern.ch/user/w/wendland/test_pattuple_v9_qcd120170.root"
    # "rfio:/castor/cern.ch/user/w/wendland/test_JetData_pattuplev9.root"
    # For testing in lxplus
    #       "file:/tmp/kinnunen/pattuple_9_1_KJi.root"
    # dataVersion.getAnalysisDefaultFileCastor()
    # For testing in jade
    #        dataVersion.getAnalysisDefaultFileMadhatter()
    #dataVersion.getAnalysisDefaultFileMadhatterDcap()
    #      "file:/tmp/kinnunen/pattuple_9_1_KJi.root"
    )
)
if options.tauEmbeddingInput != 0:
    process.source.fileNames = [
        "/store/group/local/HiggsChToTauNuFullyHadronic/tauembedding/CMSSW_4_1_X/TTJets_TuneZ2_Spring11/TTJets_TuneZ2_7TeV-madgraph-tauola/Spring11_PU_S1_START311_V1G1_v1_AODSIM_tauembedding_embedding_v9_pt40/9fa4df4950a5013c36bb04ce6d0a226a/embedded_RECO_23_1_YLm.root"
        ]

process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
process.GlobalTag.globaltag = cms.string(dataVersion.getGlobalTag())
print "GlobalTag="+dataVersion.getGlobalTag()

process.load("HiggsAnalysis.HeavyChHiggsToTauNu.HChCommon_cfi")

# Uncomment the following in order to print the counters at the end of
# the job (note that if many other modules are being run in the same
# job, their INFO messages are printed too)
#process.MessageLogger.cerr.threshold = cms.untracked.string("INFO")

# Fragment to run PAT on the fly if requested from command line
from HiggsAnalysis.HeavyChHiggsToTauNu.HChPatTuple import addPatOnTheFly
process.commonSequence, additionalCounters = addPatOnTheFly(process, options, dataVersion)

# Add configuration information to histograms.root
from HiggsAnalysis.HeavyChHiggsToTauNu.HChTools import addConfigInfo
process.infoPath = addConfigInfo(process, options, dataVersion)

###
# MC Filter
import HiggsAnalysis.HeavyChHiggsToTauNu.tauEmbedding.customisations as tauEmbeddingCustomisations
if filterGenTaus:
    additionalCounters.extend(tauEmbeddingCustomisations.addGeneratorTauFilter(process, process.commonSequence, filterInaccessible=filterGenTausInaccessible))

################################################################################
# The "golden" version of the alphat analysis

# Primary vertex selection
from HiggsAnalysis.HeavyChHiggsToTauNu.HChPrimaryVertex import addPrimaryVertexSelection
addPrimaryVertexSelection(process, process.commonSequence)

import HiggsAnalysis.HeavyChHiggsToTauNu.HChSignalAnalysisParameters_cff as param
param.overrideTriggerFromOptions(options)
# Set tau selection mode to 'standard' or 'factorized'
param.setAllTauSelectionOperatingMode('standard')
#param.setAllTauSelectionOperatingMode('factorized')

# Set tau sources to trigger matched tau collections
#param.setAllTauSelectionSrcSelectedPatTaus()

# Set the triggers for trigger efficiency parametrisation
#param.trigger.triggerTauSelection = param.tauSelectionHPSVeryLooseTauBased.clone( # VeryLoose
param.trigger.triggerTauSelection = param.tauSelectionHPSTightTauBased.clone( # Tight
  rtauCut = cms.untracked.double(0.0) # No rtau cut for trigger tau
)
param.trigger.triggerMETSelection = param.MET.clone(
  METCut = cms.untracked.double(0.0) # No MET cut for trigger MET
)
if (doTriggerParametrisation and not dataVersion.isData()):
    # 2010 and 2011 scenarios
    #param.setEfficiencyTriggersFor2010()
    param.setEfficiencyTriggersFor2011()
    # Settings for the configuration
    param.trigger.selectionType = cms.untracked.string("byParametrisation")

# Set the data scenario for trigger efficiencies and vertex weighting
#param.setTriggerVertexFor2010()
param.setTriggerVertexFor2011()

if options.tauEmbeddingInput != 0:
    tauEmbeddingCustomisations.addMuonIsolationEmbeddingForAlphatAnalysis(process, process.commonSequence)
    tauEmbeddingCustomisations.customiseParamForTauEmbedding(param, dataVersion)
    if tauEmbeddingFinalizeMuonSelection:
        applyIsolation = not doTauEmbeddingMuonSelectionScan
        additionalCounters.extend(tauEmbeddingCustomisations.addFinalMuonSelection(process, process.commonSequence, param,
                                                                                   enableIsolation=applyIsolation))

# alphat analysis module for the "golden analysis"
process.alphatAnalysis = cms.EDFilter("HPlusAlphatAnalysisProducer",
    trigger = param.trigger,
    primaryVertexSelection = param.primaryVertexSelection,
    GlobalElectronVeto = param.GlobalElectronVeto,
    GlobalMuonVeto = param.GlobalMuonVeto,
    # Change default tau algorithm here as needed
    tauSelection = param.tauSelectionHPSTightTauBased,
    jetSelection = param.jetSelection,
    MET = param.MET,
    bTagging = param.bTagging,
    fakeMETVeto = param.fakeMETVeto,
    jetTauInvMass = param.jetTauInvMass,
    topSelection = param.topSelection,
    forwardJetVeto = param.forwardJetVeto,
    transverseMassCut = param.transverseMassCut,
    EvtTopology = param.EvtTopology,
    TriggerEmulationEfficiency = param.TriggerEmulationEfficiency,
    vertexWeight = param.vertexWeight,
    tauEmbedding = param.TauEmbeddingAnalysis,
    GenParticleAnalysis = param.GenParticleAnalysis
)

# Prescale fetching done automatically for data
if dataVersion.isData():
    process.load("HiggsAnalysis.HeavyChHiggsToTauNu.HPlusPrescaleWeightProducer_cfi")
    process.hplusPrescaleWeightProducer.prescaleWeightTriggerResults.setProcessName(dataVersion.getTriggerProcess())
    process.hplusPrescaleWeightProducer.prescaleWeightHltPaths = param.trigger.triggers.value()
    process.commonSequence *= process.hplusPrescaleWeightProducer
    process.alphatAnalysis.prescaleSource = cms.untracked.InputTag("hplusPrescaleWeightProducer")

# Print output
print "Trigger:", process.alphatAnalysis.trigger
print "VertexWeight:",process.alphatAnalysis.vertexWeight
print "Cut on HLT MET (check histogram Trigger_HLT_MET for minimum value): ", process.alphatAnalysis.trigger.hltMetCut
print "Trigger efficiencies by: ", ", ".join([param.formatEfficiencyTrigger(x) for x in process.alphatAnalysis.trigger.triggerEfficiency.selectTriggers])
#print "TauSelection algorithm:", process.alphatAnalysis.tauSelection.selection
print "TauSelection algorithm:", process.alphatAnalysis.tauSelection.selection
print "TauSelection src:", process.alphatAnalysis.tauSelection.src
print "TauSelection operating mode:", process.alphatAnalysis.tauSelection.operatingMode

# Counter analyzer (in order to produce compatible root file with the
# python approach)
process.alphatAnalysisCounters = cms.EDAnalyzer("HPlusEventCountAnalyzer",
    counterNames = cms.untracked.InputTag("alphatAnalysis", "counterNames"),
    counterInstances = cms.untracked.InputTag("alphatAnalysis", "counterInstances"),
    printMainCounter = cms.untracked.bool(True),
    printSubCounters = cms.untracked.bool(False), # Default False
    printAvailableCounters = cms.untracked.bool(False),
)
if len(additionalCounters) > 0:
    process.alphatAnalysisCounters.counters = cms.untracked.VInputTag([cms.InputTag(c) for c in additionalCounters])

# PickEvent module and the main Path. The picked events are only the
# ones selected by the golden analysis defined above.
process.load("HiggsAnalysis.HeavyChHiggsToTauNu.PickEventsDumper_cfi")
process.alphatAnalysisPath = cms.Path(
    process.commonSequence * # supposed to be empty, unless "doPat=1" command line argument is given
    process.alphatAnalysis *
    process.alphatAnalysisCounters *
    process.PickEvents
)


# b tagging testing
from HiggsAnalysis.HeavyChHiggsToTauNu.HChTools import addAnalysis
if doBTagScan:
    module = process.alphatAnalysis.clone()
    module.bTagging.discriminator = "trackCountingHighPurBJetTags"
    module.bTagging.discriminatorCut = 1.2
    addAnalysis(process, "alphatAnalysisBtaggingTest", module,
                preSequence=process.commonSequence,
                additionalCounters=additionalCounters,
                alphatAnalysisCounters=True)
if doBTagScan:
    from HiggsAnalysis.HeavyChHiggsToTauNu.HChTools import addAnalysis
    module = process.alphatAnalysis.clone()
    module.bTagging.discriminator = "trackCountingHighPurBJetTags"
    module.bTagging.discriminatorCut = 1.8
    addAnalysis(process, "alphatAnalysisBtaggingTest2", module,
                preSequence=process.commonSequence,
                additionalCounters=additionalCounters,
                alphatAnalysisCounters=True)


################################################################################
# The alphat analysis with different tau ID algorithms
#
# Run the analysis for the different tau ID algorithms at the same job
# as the golden analysis. It is significantly more efficiency to run
# many analyses in a single job compared to many jobs (this avoids
# some of the I/O and grid overhead). The fragment below creates the
# following histogram directories
# alphatAnalysisTauSelectionShrinkingConeCutBased
# alphatAnalysisTauSelectionShrinkingConeTaNCBased
# alphatAnalysisTauSelectionCaloTauCutBased
# alphatAnalysisTauSelectionHPSTauBased
# alphatAnalysisTauSelectionCombinedHPSTaNCBased
#
# The corresponding Counter directories have "Counters" postfix, and
# cms.Paths "Path" postfix. The paths are run independently of each
# other. It is important to give the process.commonSequence for the
# function, so that it will be run before the analysis module in the
# Path. Then, in case PAT is run on the fly, the framework runs the
# analysis module after PAT (and runs PAT only once).
if doAllTauIds:
    param.addTauIdAnalyses(process, "alphatAnalysis", process.alphatAnalysis, process.commonSequence, additionalCounters)

################################################################################
# The alphat analysis with jet energy scale variation
#
# If the flag is true, create two paths for the variation in plus and
# minus, and clone the alphat analysis and counter modules to the
# paths. The tau, jet and MET collections to adjust are taken from the
# configuration of the golden analysis. The fragment below creates the
# following histogram directories
# alphatAnalysisJESPlus05
# alphatAnalysisJESMinus05
from HiggsAnalysis.HeavyChHiggsToTauNu.JetEnergyScaleVariation import addJESVariationAnalysis
if doJESVariation:
    # In principle here could be more than two JES variation analyses
    JESs = "%02d" % int(JESVariation*100)
    JESe = "%02d" % int(JESEtaVariation*100)
    JESm = "%02d" % int(JESUnclusteredMETVariation*100)
    addJESVariationAnalysis(process, "alphatAnalysis", "JESPlus"+JESs+"eta"+JESe+"METPlus"+JESm, process.alphatAnalysis, additionalCounters, JESVariation, JESEtaVariation, JESUnclusteredMETVariation)
    addJESVariationAnalysis(process, "alphatAnalysis", "JESMinus"+JESs+"eta"+JESe+"METPlus"+JESm, process.alphatAnalysis, additionalCounters, -JESVariation, JESEtaVariation, JESUnclusteredMETVariation)
    addJESVariationAnalysis(process, "alphatAnalysis", "JESPlus"+JESs+"eta"+JESe+"METMinus"+JESm, process.alphatAnalysis, additionalCounters, JESVariation, JESEtaVariation, -JESUnclusteredMETVariation)
    addJESVariationAnalysis(process, "alphatAnalysis", "JESMinus"+JESs+"eta"+JESe+"METMinus"+JESm, process.alphatAnalysis, additionalCounters, -JESVariation, JESEtaVariation, -JESUnclusteredMETVariation)

# alphat analysis with various tightened muon selections for tau embedding
if options.tauEmbeddingInput != 0 and doTauEmbeddingMuonSelectionScan:
    tauEmbeddingCustomisations.addMuonIsolationAnalyses(process, "alphatAnalysis", process.alphatAnalysis, process.commonSequence, additionalCounters)

if doTauEmbeddingTauSelectionScan:
    tauEmbeddingCustomisations.addTauAnalyses(process, "alphatAnalysis", process.alphatAnalysis, process.commonSequence, additionalCounters)

# Print tau discriminators from one tau from one event. Note that if
# the path below is commented, the discriminators are not printed.
process.tauDiscriminatorPrint = cms.EDAnalyzer("HPlusTauDiscriminatorPrintAnalyzer",
    src = process.alphatAnalysis.tauSelection.src
)
#process.tauDiscriminatorPrintPath = cms.Path(
#    process.commonSequence *
#    process.tauDiscriminatorPrint
#)

################################################################################

# Define the output module. Note that it is not run if it is not in
# any Path! Hence it is enough to (un)comment the process.outpath
# below to enable/disable the EDM output.
process.out = cms.OutputModule("PoolOutputModule",
    fileName = cms.untracked.string('output.root'),
    outputCommands = cms.untracked.vstring(
        "keep *_*_*_HChAlphatAnalysis",
        "drop *_*_counterNames_*",
        "drop *_*_counterInstances_*"
#	"drop *",
#	"keep *",
#        "keep edmMergeableCounter_*_*_*"
    )
)

# Uncomment the following line to get also the event output (can be
# useful for debugging purposes)
#process.outpath = cms.EndPath(process.out)
