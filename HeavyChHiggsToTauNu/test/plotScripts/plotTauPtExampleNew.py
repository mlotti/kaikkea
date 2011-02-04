#!/usr/bin/env python

###########################################################################
#
# This script is only intended as an example, please do NOT modify it.
# For example, start from scratch and look here for help, or make a
# copy of it and modify the copy (including removing all unnecessary
# code).
#
###########################################################################

import ROOT
from HiggsAnalysis.HeavyChHiggsToTauNu.tools.dataset import *
from HiggsAnalysis.HeavyChHiggsToTauNu.tools.histograms import *
from HiggsAnalysis.HeavyChHiggsToTauNu.tools.plots import *
from HiggsAnalysis.HeavyChHiggsToTauNu.tools.counter import *
from HiggsAnalysis.HeavyChHiggsToTauNu.tools.tdrstyle import *
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.crosssection as xsect
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.styles as styles

# Go to batch mode, comment if interactive mode is wanted (see on the
# bottom of the script how to make it to wait input from user)
ROOT.gROOT.SetBatch(True)

# Apply TDR style
style = TDRStyle()


# Construct datasets as stated in the multicrab.cfg of the execution
# directory. The returned object is of type DatasetManager.
datasets = getDatasetsFromMulticrabCfg()

# Construct datasets from the given list of CRAB task directories
#datasets = getDatasetsFromCrabDirs(["QCD_Pt120to170"])
#datasets = getDatasetsFromCrabDirs(["TTbar_Htaunu_M80"])

# Construct datasets from a given list of (name, pathToRooTFile) pairs
#datasets = getDatasetsFromRootFiles([("QCD_Pt120to170", "QCD_Pt120to170/res/histograms-QCD_Pt120to170.root")])

# Merge:
#  - all data datasets to 'Data'
#  - all QCD datasets to 'QCD'
#  - all single top datasets to 'SingleTop'
# Rename the physical dataset names to logical (essentially drop the Tune and Winter10)
# Reorder to the 'standard' order, all 'nonstandard' are left to the end
mergeRenameReorderForDataMC(datasets)

# Override the data luminosity (should not be used except for testing)
datasets.getDataset("Data").setLuminosity(35)

# Create the plot, latter argument is the path to the histogram in the ROOT files
h = DataMCPlot(datasets, "signalAnalysis/TauSelection_all_tau_candidates_pt")

# Stack MC histograms
h.stackMCHistograms()
#tauPt.stackMCHistograms(stackSignal=True) # Stack also the signal datasets?

h.addMCUncertainty()

# Create canvas and frame for only the distributions
h.createFrame("taupt_new")
h.frame.GetXaxis().SetTitle("#tau p_T (GeV/c)")
h.frame.GetYaxis().SetTitle("#tau cands / 1 GeV/c")

# Create legend
h.setLegend(createLegend())

# Draw the histograms and the legend
h.draw()

# Add the necessary pieces of text
addCmsPreliminaryText()
addEnergyText()
h.addLuminosityText()

# Save to .png, .eps and .C file
h.save()


# Same, but create two pads, one for the distributions and another for
# the data/MC
h = DataMCPlot(datasets, "signalAnalysis/TauSelection_all_tau_candidates_pt")
h.stackMCHistograms()
h.addMCUncertainty()
h.createFrameFraction("taupt_new2",)
h.frame.GetXaxis().SetTitle("#tau p_{T} (GeV/c)")
h.frame.GetYaxis().SetTitle("#tau cands / 1 GeV/c")
h.setLegend(createLegend())
h.draw()
addCmsPreliminaryText()
addEnergyText()
h.addLuminosityText()
h.save()

# Script execution can be paused like this, it will continue after
# user has given some input (which must include enter)
#raw_input("Hit enter to continue")
