{
//=========Macro generated from canvas: invertedEWKFakeTaus3Integral/
//=========  (Sun Jul 20 15:00:32 2014) by ROOT version5.32/00
   TCanvas *invertedEWKFakeTaus3Integral = new TCanvas("invertedEWKFakeTaus3Integral", "",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   invertedEWKFakeTaus3Integral->SetHighLightColor(2);
   invertedEWKFakeTaus3Integral->Range(-101.2658,-1.413812,531.6456,1.769359);
   invertedEWKFakeTaus3Integral->SetFillColor(0);
   invertedEWKFakeTaus3Integral->SetBorderMode(0);
   invertedEWKFakeTaus3Integral->SetBorderSize(2);
   invertedEWKFakeTaus3Integral->SetLogy();
   invertedEWKFakeTaus3Integral->SetTickx(1);
   invertedEWKFakeTaus3Integral->SetTicky(1);
   invertedEWKFakeTaus3Integral->SetLeftMargin(0.16);
   invertedEWKFakeTaus3Integral->SetRightMargin(0.05);
   invertedEWKFakeTaus3Integral->SetTopMargin(0.05);
   invertedEWKFakeTaus3Integral->SetBottomMargin(0.13);
   invertedEWKFakeTaus3Integral->SetFrameFillStyle(0);
   invertedEWKFakeTaus3Integral->SetFrameBorderMode(0);
   invertedEWKFakeTaus3Integral->SetFrameFillStyle(0);
   invertedEWKFakeTaus3Integral->SetFrameBorderMode(0);
   
   TH1F *hframe__59 = new TH1F("hframe__59","",1000,0,500);
   hframe__59->SetMinimum(0.1);
   hframe__59->SetMaximum(40.75685);
   hframe__59->SetDirectory(0);
   hframe__59->SetStats(0);
   hframe__59->SetLineStyle(0);
   hframe__59->SetMarkerStyle(20);
   hframe__59->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__59->GetXaxis()->SetLabelFont(43);
   hframe__59->GetXaxis()->SetLabelOffset(0.007);
   hframe__59->GetXaxis()->SetLabelSize(27);
   hframe__59->GetXaxis()->SetTitleSize(33);
   hframe__59->GetXaxis()->SetTitleOffset(0.9);
   hframe__59->GetXaxis()->SetTitleFont(43);
   hframe__59->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__59->GetYaxis()->SetLabelFont(43);
   hframe__59->GetYaxis()->SetLabelOffset(0.007);
   hframe__59->GetYaxis()->SetLabelSize(27);
   hframe__59->GetYaxis()->SetTitleSize(33);
   hframe__59->GetYaxis()->SetTitleOffset(1.25);
   hframe__59->GetYaxis()->SetTitleFont(43);
   hframe__59->GetZaxis()->SetLabelFont(43);
   hframe__59->GetZaxis()->SetLabelOffset(0.007);
   hframe__59->GetZaxis()->SetLabelSize(27);
   hframe__59->GetZaxis()->SetTitleSize(33);
   hframe__59->GetZaxis()->SetTitleFont(43);
   hframe__59->Draw(" ");
   TLatex *   tex = new TLatex(0.62,0.96,"CMS Preliminary");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.96,"#sqrt{s} = 8 TeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.43,0.96,"L=20 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.4,0.7,"Integral = 241 ev");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3 = new TH1F("Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3","#tau p_{T}=70..80",50,0,500);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(1,4.443617);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(2,6.465371);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(3,19.02027);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(4,15.7274);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(5,15.0007);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(6,13.30441);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(7,15.92531);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(8,19.95212);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(9,14.51154);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(10,20.37843);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(11,13.28579);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(12,11.92235);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(13,14.84212);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(14,8.08075);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(15,13.97585);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(16,6.431573);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(17,7.274938);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(18,2.648458);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(19,5.634984);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(20,3.053104);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(21,2.109682);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(22,1.718123);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(23,1.970718);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(25,0.4193635);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(26,1.617384);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(27,0.4205479);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(28,0.1032135);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(30,0.02711949);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(31,0.03087445);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(32,0.2685618);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(34,0.07663786);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(38,0.328458);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinContent(51,0.01407612);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(1,1.6398);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(2,1.90517);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(3,5.483462);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(4,3.025348);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(5,3.085043);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(6,2.865791);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(7,3.212751);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(8,4.881713);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(9,2.944053);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(10,3.430525);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(11,2.816263);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(12,2.488404);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(13,3.723295);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(14,2.017008);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(15,2.988958);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(16,1.772523);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(17,2.315381);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(18,1.125983);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(19,1.834368);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(20,1.292903);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(21,1.055711);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(22,0.8325577);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(23,1.026347);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(25,0.4193635);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(26,0.8136083);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(27,0.4205479);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(28,0.1032135);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(30,0.0271195);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(31,0.03087445);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(32,0.2685618);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(34,0.07663786);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(38,0.328458);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetBinError(51,0.01407612);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetEntries(554);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetFillColor(ci);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetLineWidth(2);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetMarkerStyle(20);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->SetMarkerSize(1.2);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetXaxis()->SetLabelFont(42);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetXaxis()->SetLabelSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetXaxis()->SetTitleSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetXaxis()->SetTitleFont(42);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetYaxis()->SetTitle("Events / 10 GeV");
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetYaxis()->SetLabelFont(42);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetYaxis()->SetLabelSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetYaxis()->SetTitleSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetYaxis()->SetTitleOffset(1.5);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetYaxis()->SetTitleFont(42);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetZaxis()->SetLabelFont(42);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetZaxis()->SetLabelSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetZaxis()->SetTitleSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->GetZaxis()->SetTitleFont(42);
   Inverted/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus/METInvertedTauIdAfterCollinearCutsOnlyEWKFakeTaus3->Draw("HIST same");
   
   TH1F *hframe__60 = new TH1F("hframe__60","",1000,0,500);
   hframe__60->SetMinimum(0.1);
   hframe__60->SetMaximum(40.75685);
   hframe__60->SetDirectory(0);
   hframe__60->SetStats(0);
   hframe__60->SetLineStyle(0);
   hframe__60->SetMarkerStyle(20);
   hframe__60->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__60->GetXaxis()->SetLabelFont(43);
   hframe__60->GetXaxis()->SetLabelOffset(0.007);
   hframe__60->GetXaxis()->SetLabelSize(27);
   hframe__60->GetXaxis()->SetTitleSize(33);
   hframe__60->GetXaxis()->SetTitleOffset(0.9);
   hframe__60->GetXaxis()->SetTitleFont(43);
   hframe__60->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__60->GetYaxis()->SetLabelFont(43);
   hframe__60->GetYaxis()->SetLabelOffset(0.007);
   hframe__60->GetYaxis()->SetLabelSize(27);
   hframe__60->GetYaxis()->SetTitleSize(33);
   hframe__60->GetYaxis()->SetTitleOffset(1.25);
   hframe__60->GetYaxis()->SetTitleFont(43);
   hframe__60->GetZaxis()->SetLabelFont(43);
   hframe__60->GetZaxis()->SetLabelOffset(0.007);
   hframe__60->GetZaxis()->SetLabelSize(27);
   hframe__60->GetZaxis()->SetTitleSize(33);
   hframe__60->GetZaxis()->SetTitleFont(43);
   hframe__60->Draw("sameaxis");
   invertedEWKFakeTaus3Integral->Modified();
   invertedEWKFakeTaus3Integral->cd();
   invertedEWKFakeTaus3Integral->SetSelected(invertedEWKFakeTaus3Integral);
}
