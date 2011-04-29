#!/usr/bin/env python

import ROOT
from ROOT import TLatex, TLegend, TLegendEntry
ROOT.gROOT.SetBatch(True) # batch mode

import HiggsAnalysis.HeavyChHiggsToTauNu.tools.tdrstyle as tdrstyle
import HiggsAnalysis.HeavyChHiggsToTauNu.tools.statisticalFunctions as statisticalFunctions

# write text to plot
def writePreliminaryText():
    text = TLatex()
    text.SetTextColor(1)
    text.SetTextAlign(12)
    text.SetTextSize(0.04)
    text.SetTextFont(1)
    text.SetNDC()
    text.DrawLatex(0.185,0.9,"CMS preliminary")
    return 0

def writeText( myText, y ):
    text = TLatex()
#    text.SetTextColor(1)
#    text.SetTextAlign(12)
    text.SetTextSize(20)
#    text.SetTextFont(1)
    text.SetNDC()
    text.DrawLatex(0.185,y,myText)
    return 0

# Create a TGraph for tanb y values from a TGraph with BR y values
# Convention: begin with low mH, lower limit for 1/2s band
# then go counterclockwise: increase mH, then switch to upper limit, decrease mH
def graphToTanBeta(graph, mu=200, removeNotValid=True):
    # Don't modify the original
    graph = graph.Clone()

    # Loop over the graph points
    yvalues = graph.GetY()
    tanbRef = 20 # initial guess
    for i in xrange(0, graph.GetN()):
        mass = graph.GetX()[i]
        # For some reason tanbForBR gets stuck for some large values; solution: do not
        # even bother to calculate values for Br>=0.5
        if yvalues[i]<0.50:
            tanb = statisticalFunctions.tanbForBR(yvalues[i], mass, tanbRef, mu)
        else:
            tanb = -1
        print "mass %d, BR %f, tanb %f, %d / %d" % (mass, yvalues[i], tanb, i, graph.GetN())
#        if tanb < 0:
#           print "No valid tanb for BR %f" % yvalues[i]

        graph.SetPoint(i, mass, tanb)

    # For points for which a valid tanb value can not be obtained,
    # either remove the point, or set a huge value
    if removeNotValid:
        found = True
        while found:
            found = False
            for i in xrange(0, graph.GetN()):
                if graph.GetY()[i] < 0:
                    graph.RemovePoint(i)
                    found = True
                    break
    else:
        for i in xrange(0, graph.GetN()):
            if graph.GetY()[i] < 0:
                # set huge value or zero
                if 2*i>=graph.GetN():
                    graph.SetPoint(i, graph.GetX()[i], 1e6)
                else:
                    graph.SetPoint(i, graph.GetX()[i], 0.0)
                
    return graph

# Get the mass points (x values) of a TGraph as integers, so that they
# can be reliably compared
def getMassPoints(graph):
    return [int(graph.GetX()[i]) for i in xrange(0, graph.GetN())]

# Remove mass points from TGraph which are *not* in massPoints list
def keepOnlyMassPoints(graph, massPoints):
    found = True
    while found:
        found = False
        for i in xrange(0, graph.GetN()):
            if int(graph.GetX()[i]) not in massPoints:
                graph.RemovePoint(i)
                found = True
                break

# Main function, called explicilty from the end of the script
def main():
    # Apply TDR style
    style = tdrstyle.TDRStyle()

    # Open ROOT file
    f = ROOT.TFile.Open("brlimits.root")

    # Get TGraphs
    observed = f.Get("tg_obs")
    expected = f.Get("tg_exp")
    expected_1s = f.Get("tg_exp_cont1")
    expected_2s = f.Get("tg_exp_cont2")

    # Create tan beta graphs
    # Convention: begin with low mH, lower limit for 1/2s band
    # then go counterclockwise: increase mH, then switch to upper limit, decrease mH
    observed_tanb = graphToTanBeta(observed)
    expected_tanb = graphToTanBeta(expected)
    expected_1s_tanb = graphToTanBeta(expected_1s, removeNotValid=False)
    expected_2s_tanb = graphToTanBeta(expected_2s, removeNotValid=False)

    # Take the mass points of observed and expected graphs. If the
    # mass point is missing from both of them, remove it from the 1/2
    # sigma bands. Keep the point if it is in observed or in expected
    # graph.
    observed_mp = getMassPoints(observed_tanb)
    expected_mp = getMassPoints(expected_tanb)
    valid_mp = list(set(observed_mp) | set(expected_mp)) # make a union of observed and expected
    valid_mp.sort()
    keepOnlyMassPoints(expected_1s_tanb, valid_mp)
    keepOnlyMassPoints(expected_2s_tanb, valid_mp)

    # Define the axis ranges
    massMin = valid_mp[0] - 5
    massMax = valid_mp[-1] + 5
    tanbMax = 160#200

    # Create the TCanvas, frame, etc
    canvas = ROOT.TCanvas("mssmLimit")
    frame = canvas.DrawFrame(massMin, 0, massMax, tanbMax)

    # Draw the graphs
    expected_2s_tanb.Draw("F")
    expected_1s_tanb.Draw("F")
    expected_tanb.Draw("LP")
    observed_tanb.Draw("LP")

    # Axis labels
    frame.GetXaxis().SetTitle("m_{H^{#pm}} [GeV/c^{2}]")
    frame.GetYaxis().SetTitle("tan(#beta)")

    # Legends
    pl  = ROOT.TLegend(0.58,0.73,0.8,0.92)
    pl.SetTextSize(0.03)
    pl.SetFillStyle(4000)
    pl.SetTextFont(132)
    pl.SetBorderSize(0)
    ple = ROOT.TLegendEntry()
    pl.AddEntry(observed_tanb,     "Observed", "lp")
    pl.AddEntry(expected_tanb,     "Expected", "lp")
    pl.AddEntry(expected_1s_tanb,  "Expected #pm1 #sigma", "f")
    pl.AddEntry(expected_2s_tanb,  "Expected #pm2 #sigma", "f")
    pl.Draw()
    
    # Text
    #    lumifile = ROOT.TFile.Open("input_luminosity")
    #    lumi = lumifile.Get("tg_obs")
    #     ifstream fileLumi("input_luminosity",ios::in); fileLumi>>L;
    #     ifstream fileLumi("input_luminosity",ios::in);
    #     fileLumi>>L;
    lumifile = open("input_luminosity","r")
    lumi = lumifile.readline()
#    print("Lumi is %d",(L))
    writePreliminaryText()
    top = 0.85
    lineSpace = 0.038
    writeText("t#rightarrowH^{#pm}b, H^{#pm}#rightarrow#tau#nu",top)
    writeText("Fully hadronic final state",   top - lineSpace)
    writeText("#sqrt{s}=7 TeV, "+ lumi + " pb^{-1}", top - 2*lineSpace)
    writeText("Bayesian CL limits",           top - 3*lineSpace)
    writeText("Br(H^{#pm}#rightarrow#tau^{#pm} #nu) = 1", top - 4*lineSpace)
    
    # Save to file
    formats = [
        ".png",
#        ".C",
#        ".eps",
        ]
    for format in formats:
        canvas.SaveAs(format)


# If the file is run (and not imported), call function main()
if __name__ == "__main__":
    main()
