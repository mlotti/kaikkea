#!/usr/bin/env python

import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.PyConfig.IgnoreCommandLineOptions = True
import math
import sys
import os
import array
from optparse import OptionParser

import HiggsAnalysis.HeavyChHiggsToTauNu.tools.dataset as dataset
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.histograms as histograms
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.tdrstyle as tdrstyle
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.styles as styles
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.plots as plots
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.systematics as systematics
import HiggsAnalysis.HeavyChHiggsToTauNu.qcdInverted.fakeRateWeighting as fakeRateWeighting
from HiggsAnalysis.HeavyChHiggsToTauNu.tools.analysisModuleSelector import *
from HiggsAnalysis.HeavyChHiggsToTauNu.qcdCommon.dataDrivenQCDCount import *
import HiggsAnalysis.HeavyChHiggsToTauNu.qcdInverted.qcdInvertedResult as qcdInvertedResult
from HiggsAnalysis.HeavyChHiggsToTauNu.tools.ShellStyles import *

myCMSText = "CMS"

def doSinglePlot(hbase, hinv, myDir, histoName, luminosity):
    def rebin(h, name):
        myBinning = []
        if name.startswith("MT"):
            myBinning = systematics.getBinningForPlot("shapeTransverseMass")
            #myBinning = [0,20,40,60,80,100,120,140,160,200,400]
        elif name.startswith("INVMASS"):
            myBinning = systematics.getBinningForPlot("shapeInvariantMass")
        else:
            raise Exception("Unknown binning information")
        myArray = array.array("d",myBinning)
        # Rebin and move under/overflow bins to visible bins
        h = h.Rebin(len(myBinning)-1,"",myArray)
        h.SetBinContent(1, h.GetBinContent(0)+h.GetBinContent(1))
        h.SetBinError(1, math.sqrt(h.GetBinContent(0)**2 + h.GetBinContent(1)**2))
        h.SetBinContent(h.GetNbinsX()+1, h.GetBinContent(h.GetNbinsX()+1)+h.GetBinContent(h.GetNbinsX()+2))
        h.SetBinError(h.GetNbinsX()+1, math.sqrt(h.GetBinError(h.GetNbinsX()+1)**2 + h.GetBinError(h.GetNbinsX()+2)**2))
        h.SetBinContent(0, 0.0)
        h.SetBinError(0, 0.0)
        h.SetBinContent(h.GetNbinsX()+2, 0.0)
        h.SetBinError(h.GetNbinsX()+2, 0.0)
        return h

    hbase.SetLineColor(ROOT.kBlack)
    hinv.SetLineColor(ROOT.kRed)
    hinv.SetLineStyle(2)

    # Rebin
    hbase = rebin(hbase, histoName)
    hinv = rebin(hinv, histoName)
    # Normalize
    print "baseline: %.1f events, inverted %.1f events"%(hbase.Integral(), hinv.Integral())
    hbase.Scale(1.0 / hbase.Integral())
    hinv.Scale(1.0 / hinv.Integral())
    # Plot
    baseHisto = histograms.Histo(hbase, "Isolated", drawStyle="HIST", legendStyle="l")
    invHisto = histograms.Histo(hinv, "Anti-isolated", drawStyle="HIST", legendStyle="l")
    plot = plots.ComparisonPlot(baseHisto, invHisto)
    #plot.setLuminosity(luminosity)
    #plot.histoMgr.forEachHisto(lambda h: h.getRootHisto().SetLineWidth(3))
    plot.histoMgr.forEachHisto(lambda h: h.getRootHisto().SetLineWidth(2))
    myPlotName = "%s/QCDInv_ClosureTest_%s"%(myDir, histoName)
    myParams = {}
    #myParams["ylabel"] = "Events/#Deltam_{T}, normalized to 1"
    myParams["ylabel"] = "#LT Events / bin #GT, normalized to 1"
    myParams["xlabel"] = "m_{T}(tau,MET), GeV"
    myParams["log"] = False
    #myParams["opts2"] = {"ymin": 0.0, "ymax":2.0}
    myParams["opts2"] = {"ymin": 0.3, "ymax":1.7}
    myParams["opts"] = {"ymin": 0.0}
    myParams["ratio"] = True
    myParams["ratioType"] = "errorScale"
    myParams["ratioYlabel"] = "Ratio"#"Var./Nom."
    myParams["cmsText"] = myCMSText
    #myParams["addLuminosityText"] = False
    myParams["divideByBinWidth"] = True
    plots.drawPlot(plot, myPlotName, **myParams)

def doClosureTestPlots(opts, dsetMgr, moduleInfoString, myDir, luminosity, normFactors):
    # Set here the names of the histograms you want to access
    histoNameList = ["MTInvertedTauIdFinalReversedBtag","MTInvertedTauIdFinalReversedBacktoBackDeltaPhi"]
    #histoNameList = ["shapeTransverseMass"]
    #histoNameList = ["MTInvertedTauIdAfterCollinearCuts"]
    for histoName in histoNameList:
        print histoName
        myFakeRateWeightCalculator = fakeRateWeighting.FakeRateWeightCalculator(dsetMgr, "Inverted/"+histoName, normFactors, luminosity)
        myBaselineShape = DataDrivenQCDShape(dsetMgr, "Data", "EWK", "baseline/"+histoName.replace("Inverted","Baseline"), luminosity, dataDrivenFakeTaus=True)
        myInvertedShape = DataDrivenQCDShape(dsetMgr, "Data", "EWK", "Inverted/"+histoName, luminosity, dataDrivenFakeTaus=True)
        myInvertedResults = qcdInvertedResult.QCDInvertedShape(myInvertedShape, moduleInfoString, myFakeRateWeightCalculator.getTotalFakeRateProbabilities(), optionPrintPurityByBins=False, optionDoNQCDByBinHistograms=True)
        # Do comparison plots bin-by-bin
        myInvertedHistos = myInvertedResults.getNQCDHistograms()
        histoName = histoName.replace("AfterCollinearCuts","AfterCollinearCutsPlusFilteredEWKFakeTaus")
        for i in range(0, len(myInvertedHistos)):
            doSinglePlot(myBaselineShape.getDataDrivenQCDHistoForSplittedBin(i), myInvertedHistos[i], myDir, histoName+"_bin%d"%i, luminosity)
        # Do comparison plot for bins summed up
        doSinglePlot(myBaselineShape.getIntegratedDataDrivenQCDHisto(), myInvertedResults.getResultShape(), myDir, histoName, luminosity)
    print HighlightStyle()+"doClosureTestPlots is ready"+NormalStyle()

def doEventYieldTable(opts, dsetMgr, moduleInfoString, myDir, luminosity, normFactors):
    def _calculateCellWidths(widths, row):
        myResult = widths
        # Initialise widths if necessary
        if len(row) == 0:
          return myResult
        for i in range(len(widths),len(row)):
            myResult.append(0)
        # Loop over row cells
        for i in range(0,len(row)):
            if len(row[i]) > myResult[i]:
                myResult[i] = len(row[i])
        return myResult

    def _printRow(widths, row):
        myResult = ""
        for i in range(0,len(row)):
            if i != 0:
                myResult += " "
            myResult += row[i].ljust(widths[i])
        print myResult

    histoName = "shapeTransverseMass"
    print "Event yield table for shape: %s"%histoName
    # Obtain shape
    myShape = DataDrivenQCDShape(dsetMgr, "Data", "EWK", histoName, luminosity,dataDrivenFakeTaus=True)
    myHeader = []
    myDataList = []
    myMCEWKList = []
    myNormList = []
    myResultList = []
    for i in range(0,len(myShape._dataList)):
        # Get histograms
        hData = myShape._dataList[i]
        hMCEWK = myShape._ewkList[i]
        # Get event count and stat. uncert.
        myDataStatUncert = ROOT.Double(0.0)
        myMCEWKStatUncert = ROOT.Double(0.0)
        myDataCount = hData.IntegralAndError(0, hData.GetNbinsX()+2, myDataStatUncert)
        myMCEWKCount = hMCEWK.IntegralAndError(0, hMCEWK.GetNbinsX()+2, myMCEWKStatUncert)
        # Store result
        myHeader.append(myShape.getPhaseSpaceBinFileFriendlyTitle(i))
        myDataList.append("%.1f +- %.1f"%(myDataCount, myDataStatUncert))
        myMCEWKList.append("%.1f +- %.1f"%(myMCEWKCount, myMCEWKStatUncert))
        myNormFactor = normFactors[myShape.getPhaseSpaceBinFileFriendlyTitle(i)]
        myNormList.append("%.3f"%myNormFactor)
        myTotalCount = myDataCount - myMCEWKCount
        myTotalStatUncert = math.sqrt(myDataStatUncert**2 + myMCEWKStatUncert**2)
        myTotalCount *= myNormFactor
        myTotalStatUncert *= myNormFactor
        myResultList.append("%.1f +- %.1f"%(myTotalCount, myTotalStatUncert))
    # Format table
    myWidths = []
    myWidths = _calculateCellWidths(myWidths, myHeader)
    myWidths = _calculateCellWidths(myWidths, myDataList)
    myWidths = _calculateCellWidths(myWidths, myMCEWKList)
    myWidths = _calculateCellWidths(myWidths, myNormList)
    myWidths = _calculateCellWidths(myWidths, myResultList)
    # Print result
    _printRow(myWidths, myHeader)
    _printRow(myWidths, myDataList)
    _printRow(myWidths, myMCEWKList)
    _printRow(myWidths, myNormList)
    _printRow(myWidths, myResultList)

def createOutputdirectory(myDir):
    if os.path.exists(myDir):
        # Remove very old files
        for filename in os.listdir("%s/."%myDir):
            if filename[0:4] == "old_":
                os.remove("%s/%s"%(myDir,filename))
        # Rename remaining files
        for filename in os.listdir("%s/."%myDir):
            os.rename("%s/%s"%(myDir,filename), "%s/old_%s"%(myDir,filename))
    else:
        # Create directory since it does not exist
        os.mkdir(myDir)

def main(argv):
    dirs = []
    if len(sys.argv) < 2:
        usage()

    myMulticrabDir = sys.argv[1]

    # Obtain normalization factors
    myNormalizationFactorSource = "QCDInvertedNormalizationFactors.py"
    myNormFactors = None
    myNormFactorsSafetyCheck = None
    if os.path.exists(myNormalizationFactorSource):
        myNormFactorsImport = getattr(__import__(myNormalizationFactorSource.replace(".py","")), "QCDInvertedNormalization")
        myNormFactorsSafetyCheck = getattr(__import__(myNormalizationFactorSource.replace(".py","")), "QCDInvertedNormalizationSafetyCheck")
        #QCDInvertedNormalizationSafetyCheck(era)
        myNormFactors = myNormFactorsImport.copy()
    else:
        raise Exception(ErrorLabel()+"Normalisation factors ('%s.py') not found!\nRun script InvertedTauID_Normalization.py to generate the normalization factors."%myNormalizationFactorSource)

    myModuleSelector = AnalysisModuleSelector() # Object for selecting data eras, search modes, and optimization modes

    parser = OptionParser(usage="Usage: %prog [options]",add_help_option=True,conflict_handler="resolve")
    myModuleSelector.addParserOptions(parser)
    parser.add_option("--mdir", dest="multicrabDir", action="store", help="Multicrab directory")
    # Add here parser options, if necessary, following line is an example
    #parser.add_option("--showcard", dest="showDatacard", action="store_true", default=False, help="Print datacards also to screen")

    # Parse options
    (opts, args) = parser.parse_args()

    # Obtain multicrab directory
    #myMulticrabDir = "../FakeTauComparison_140603_182139/"
    if opts.multicrabDir != None:
        myMulticrabDir = opts.multicrabDir

    # Obtain dsetMgrCreator and register it to module selector
    dsetMgrCreator = dataset.readFromMulticrabCfg(directory=myMulticrabDir)
    myModuleSelector.setPrimarySource("analysis", dsetMgrCreator)
    # Select modules
    myModuleSelector.doSelect(opts)

    # Apply TDR style
    style = tdrstyle.TDRStyle()
    histograms.createLegend.moveDefaults(dx=-0.1, dh=-0.15)
    # Give more space for digits on the y axis labels                                                   
    style.tdrStyle.SetPadLeftMargin(0.19)
    style.tdrStyle.SetTitleYOffset(1.6)

    optModes = []
    optModes.append("OptQCDTailKillerLoosePlus") 

    myDisplayStatus = True
    # Loop over era/searchMode/optimizationMode options
    for era in myModuleSelector.getSelectedEras():
        for searchMode in myModuleSelector.getSelectedSearchModes():
            for optimizationMode in optModes: #myModuleSelector.getSelectedOptimizationModes():
                # Construct info string of module
                myModuleInfoString = "%s_%s_%s"%(era, searchMode, optimizationMode)
                print HighlightStyle()+"Module:",myModuleInfoString,NormalStyle()
                # Obtain dataset manager
                dsetMgr = dsetMgrCreator.createDatasetManager(dataEra=era,searchMode=searchMode,optimizationMode=optimizationMode)
                # Do the usual normalisation
                dsetMgr.updateNAllEventsToPUWeighted()
                dsetMgr.loadLuminosities()
                plots.mergeRenameReorderForDataMC(dsetMgr)
                dsetMgr.merge("EWK", [
                              "TTJets",
                              "WJets",
                              "DYJetsToLL",
                              "SingleTop",
                              "Diboson"
                              ])
                # Make a directory for output
                myDir = "QCDInv_ClosureTest_%s"%myModuleInfoString
                createOutputdirectory(myDir)
                # Obtain luminosity
                myLuminosity = dsetMgr.getDataset("Data").getLuminosity()
                # Print info so that user can check that merge went correct
                if myDisplayStatus:
                    dsetMgr.printDatasetTree()
                    print "Luminosity = %f 1/fb"%(myLuminosity / 1000.0)
                    print
                    myDisplayStatus = False
                # Run plots
                doClosureTestPlots(opts, dsetMgr, myModuleInfoString, myDir, myLuminosity, myNormFactors)
                #doEventYieldTable(opts, dsetMgr, myModuleInfoString, myDir, myLuminosity, myNormFactors)
                #doPurityPlots(opts, dsetMgr, myModuleInfoString, myDir, myLuminosity)
                #doQCDfactorisedResultPlots(opts, dsetMgr, myModuleInfoString, myDir, myLuminosity)

if __name__ == "__main__":
    main(sys.argv)
