{
//=========Macro generated from canvas: baselinetaup_Tgt120Integral/
//=========  (Wed Aug 13 15:50:02 2014) by ROOT version5.32/00
   TCanvas *baselinetaup_Tgt120Integral = new TCanvas("baselinetaup_Tgt120Integral", "",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   baselinetaup_Tgt120Integral->SetHighLightColor(2);
   baselinetaup_Tgt120Integral->Range(-101.2658,-1.581868,531.6456,2.894041);
   baselinetaup_Tgt120Integral->SetFillColor(0);
   baselinetaup_Tgt120Integral->SetBorderMode(0);
   baselinetaup_Tgt120Integral->SetBorderSize(2);
   baselinetaup_Tgt120Integral->SetLogy();
   baselinetaup_Tgt120Integral->SetTickx(1);
   baselinetaup_Tgt120Integral->SetTicky(1);
   baselinetaup_Tgt120Integral->SetLeftMargin(0.16);
   baselinetaup_Tgt120Integral->SetRightMargin(0.05);
   baselinetaup_Tgt120Integral->SetTopMargin(0.05);
   baselinetaup_Tgt120Integral->SetBottomMargin(0.13);
   baselinetaup_Tgt120Integral->SetFrameFillStyle(0);
   baselinetaup_Tgt120Integral->SetFrameBorderMode(0);
   baselinetaup_Tgt120Integral->SetFrameFillStyle(0);
   baselinetaup_Tgt120Integral->SetFrameBorderMode(0);
   
   TH1F *hframe__115 = new TH1F("hframe__115","",1000,0,500);
   hframe__115->SetMinimum(0.1);
   hframe__115->SetMaximum(468);
   hframe__115->SetDirectory(0);
   hframe__115->SetStats(0);
   hframe__115->SetLineStyle(0);
   hframe__115->SetMarkerStyle(20);
   hframe__115->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__115->GetXaxis()->SetLabelFont(43);
   hframe__115->GetXaxis()->SetLabelOffset(0.007);
   hframe__115->GetXaxis()->SetLabelSize(27);
   hframe__115->GetXaxis()->SetTitleSize(33);
   hframe__115->GetXaxis()->SetTitleOffset(0.9);
   hframe__115->GetXaxis()->SetTitleFont(43);
   hframe__115->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__115->GetYaxis()->SetLabelFont(43);
   hframe__115->GetYaxis()->SetLabelOffset(0.007);
   hframe__115->GetYaxis()->SetLabelSize(27);
   hframe__115->GetYaxis()->SetTitleSize(33);
   hframe__115->GetYaxis()->SetTitleOffset(1.25);
   hframe__115->GetYaxis()->SetTitleFont(43);
   hframe__115->GetZaxis()->SetLabelFont(43);
   hframe__115->GetZaxis()->SetLabelOffset(0.007);
   hframe__115->GetZaxis()->SetLabelSize(27);
   hframe__115->GetZaxis()->SetTitleSize(33);
   hframe__115->GetZaxis()->SetTitleFont(43);
   hframe__115->Draw(" ");
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
      tex = new TLatex(0.43,0.96,"L=4.4 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.4,0.7,"Integral = 1103 ev");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6 = new TH1F("baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6","#tau p_{T}>120",50,0,500);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(1,80);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(2,220);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(3,234);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(4,180);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(5,140);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(6,98);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(7,54);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(8,33);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(9,25);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(10,5);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(11,9);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(12,9);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(13,3);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(15,4);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(18,2);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(19,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(21,2);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(22,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(25,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(31,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinContent(32,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(1,8.944272);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(2,14.8324);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(3,15.29706);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(4,13.41641);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(5,11.83216);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(6,9.899495);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(7,7.348469);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(8,5.744563);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(9,5);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(10,2.236068);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(11,3);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(12,3);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(13,1.732051);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(15,2);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(18,1.414214);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(19,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(21,1.414214);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(22,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(25,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(31,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetBinError(32,1);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetEntries(1103);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetFillColor(ci);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetLineWidth(2);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetMarkerStyle(20);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->SetMarkerSize(1.2);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetXaxis()->SetLabelFont(42);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetXaxis()->SetLabelSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetXaxis()->SetTitleSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetXaxis()->SetTitleFont(42);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetYaxis()->SetTitle("Events / 10 GeV");
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetYaxis()->SetLabelFont(42);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetYaxis()->SetLabelSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetYaxis()->SetTitleSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetYaxis()->SetTitleOffset(1.5);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetYaxis()->SetTitleFont(42);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetZaxis()->SetLabelFont(42);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetZaxis()->SetLabelSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetZaxis()->SetTitleSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->GetZaxis()->SetTitleFont(42);
   baseline/METBaseLineTauIdAfterCollinearCuts/METBaselineTauIdAfterCollinearCuts6->Draw("HIST same");
   
   TH1F *hframe__116 = new TH1F("hframe__116","",1000,0,500);
   hframe__116->SetMinimum(0.1);
   hframe__116->SetMaximum(468);
   hframe__116->SetDirectory(0);
   hframe__116->SetStats(0);
   hframe__116->SetLineStyle(0);
   hframe__116->SetMarkerStyle(20);
   hframe__116->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__116->GetXaxis()->SetLabelFont(43);
   hframe__116->GetXaxis()->SetLabelOffset(0.007);
   hframe__116->GetXaxis()->SetLabelSize(27);
   hframe__116->GetXaxis()->SetTitleSize(33);
   hframe__116->GetXaxis()->SetTitleOffset(0.9);
   hframe__116->GetXaxis()->SetTitleFont(43);
   hframe__116->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__116->GetYaxis()->SetLabelFont(43);
   hframe__116->GetYaxis()->SetLabelOffset(0.007);
   hframe__116->GetYaxis()->SetLabelSize(27);
   hframe__116->GetYaxis()->SetTitleSize(33);
   hframe__116->GetYaxis()->SetTitleOffset(1.25);
   hframe__116->GetYaxis()->SetTitleFont(43);
   hframe__116->GetZaxis()->SetLabelFont(43);
   hframe__116->GetZaxis()->SetLabelOffset(0.007);
   hframe__116->GetZaxis()->SetLabelSize(27);
   hframe__116->GetZaxis()->SetTitleSize(33);
   hframe__116->GetZaxis()->SetTitleFont(43);
   hframe__116->Draw("sameaxis");
   baselinetaup_Tgt120Integral->Modified();
   baselinetaup_Tgt120Integral->cd();
   baselinetaup_Tgt120Integral->SetSelected(baselinetaup_Tgt120Integral);
}
