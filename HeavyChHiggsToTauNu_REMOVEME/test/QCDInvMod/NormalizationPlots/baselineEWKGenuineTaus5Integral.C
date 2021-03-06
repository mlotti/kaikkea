{
//=========Macro generated from canvas: baselineEWKGenuineTaus5Integral/
//=========  (Sun Jul 20 15:00:37 2014) by ROOT version5.32/00
   TCanvas *baselineEWKGenuineTaus5Integral = new TCanvas("baselineEWKGenuineTaus5Integral", "",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   baselineEWKGenuineTaus5Integral->SetHighLightColor(2);
   baselineEWKGenuineTaus5Integral->Range(-101.2658,-1.378183,531.6456,1.53092);
   baselineEWKGenuineTaus5Integral->SetFillColor(0);
   baselineEWKGenuineTaus5Integral->SetBorderMode(0);
   baselineEWKGenuineTaus5Integral->SetBorderSize(2);
   baselineEWKGenuineTaus5Integral->SetLogy();
   baselineEWKGenuineTaus5Integral->SetTickx(1);
   baselineEWKGenuineTaus5Integral->SetTicky(1);
   baselineEWKGenuineTaus5Integral->SetLeftMargin(0.16);
   baselineEWKGenuineTaus5Integral->SetRightMargin(0.05);
   baselineEWKGenuineTaus5Integral->SetTopMargin(0.05);
   baselineEWKGenuineTaus5Integral->SetBottomMargin(0.13);
   baselineEWKGenuineTaus5Integral->SetFrameFillStyle(0);
   baselineEWKGenuineTaus5Integral->SetFrameBorderMode(0);
   baselineEWKGenuineTaus5Integral->SetFrameFillStyle(0);
   baselineEWKGenuineTaus5Integral->SetFrameBorderMode(0);
   
   TH1F *hframe__99 = new TH1F("hframe__99","",1000,0,500);
   hframe__99->SetMinimum(0.1);
   hframe__99->SetMaximum(24.2921);
   hframe__99->SetDirectory(0);
   hframe__99->SetStats(0);
   hframe__99->SetLineStyle(0);
   hframe__99->SetMarkerStyle(20);
   hframe__99->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__99->GetXaxis()->SetLabelFont(43);
   hframe__99->GetXaxis()->SetLabelOffset(0.007);
   hframe__99->GetXaxis()->SetLabelSize(27);
   hframe__99->GetXaxis()->SetTitleSize(33);
   hframe__99->GetXaxis()->SetTitleOffset(0.9);
   hframe__99->GetXaxis()->SetTitleFont(43);
   hframe__99->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__99->GetYaxis()->SetLabelFont(43);
   hframe__99->GetYaxis()->SetLabelOffset(0.007);
   hframe__99->GetYaxis()->SetLabelSize(27);
   hframe__99->GetYaxis()->SetTitleSize(33);
   hframe__99->GetYaxis()->SetTitleOffset(1.25);
   hframe__99->GetYaxis()->SetTitleFont(43);
   hframe__99->GetZaxis()->SetLabelFont(43);
   hframe__99->GetZaxis()->SetLabelOffset(0.007);
   hframe__99->GetZaxis()->SetLabelSize(27);
   hframe__99->GetZaxis()->SetTitleSize(33);
   hframe__99->GetZaxis()->SetTitleFont(43);
   hframe__99->Draw(" ");
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
      tex = new TLatex(0.4,0.7,"Integral = 171 ev");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5 = new TH1F("baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5","#tau p_{T}=100..120",50,0,500);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(2,0.5043718);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(3,2.642706);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(4,4.765748);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(5,2.524144);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(6,2.404235);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(7,7.224811);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(8,3.13371);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(9,7.777891);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(10,11.18346);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(11,6.270472);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(12,8.249021);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(13,9.560005);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(14,6.272667);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(15,9.896132);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(16,9.560892);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(17,8.700078);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(18,12.14605);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(19,4.37782);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(20,6.862974);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(21,9.134418);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(22,4.279401);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(23,5.201329);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(24,4.602641);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(25,3.610783);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(26,1.816945);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(27,1.605876);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(28,1.080967);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(29,3.34611);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(30,1.559755);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(31,0.594752);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(32,1.034554);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(33,0.827691);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(34,1.808039);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(36,1.816865);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(37,0.5443035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(39,0.08616413);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(40,1.121473);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(41,0.05441494);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(42,0.683526);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(43,1.142977);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(44,0.6163095);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(45,0.2901123);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(47,0.0005265118);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(49,0.3634821);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinContent(51,1.205292);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(2,0.4732186);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(3,2.189989);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(4,1.792575);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(5,1.346168);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(6,1.012964);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(7,3.16364);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(8,1.300884);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(9,2.914981);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(10,4.581499);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(11,1.775549);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(12,2.691865);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(13,3.504442);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(14,1.74194);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(15,2.627465);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(16,2.99544);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(17,2.840152);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(18,2.270663);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(19,1.470042);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(20,2.544269);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(21,3.458701);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(22,1.442918);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(23,1.511231);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(24,1.59475);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(25,1.31467);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(26,0.9637172);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(27,0.8094061);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(28,0.6423959);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(29,1.444857);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(30,0.7939456);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(31,0.4298613);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(32,0.7141317);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(33,0.5235865);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(34,1.048728);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(36,1.012896);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(37,0.4343722);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(39,0.08616412);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(40,0.8191783);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(41,0.05441494);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(42,0.4907907);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(43,0.6631035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(44,0.6163096);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(45,0.2901123);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(47,0.0005265118);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(49,0.3634821);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetBinError(51,0.6919053);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetEntries(432);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetFillColor(ci);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetLineWidth(2);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetMarkerStyle(20);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->SetMarkerSize(1.2);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetXaxis()->SetLabelFont(42);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetXaxis()->SetLabelSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetXaxis()->SetTitleSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetXaxis()->SetTitleFont(42);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetYaxis()->SetTitle("Events / 10 GeV");
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetYaxis()->SetLabelFont(42);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetYaxis()->SetLabelSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetYaxis()->SetTitleSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetYaxis()->SetTitleOffset(1.5);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetYaxis()->SetTitleFont(42);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetZaxis()->SetLabelFont(42);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetZaxis()->SetLabelSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetZaxis()->SetTitleSize(0.035);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->GetZaxis()->SetTitleFont(42);
   baseline/METBaseLineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus/METBaselineTauIdAfterCollinearCutsPlusFilteredEWKFakeTaus5->Draw("HIST same");
   
   TH1F *hframe__100 = new TH1F("hframe__100","",1000,0,500);
   hframe__100->SetMinimum(0.1);
   hframe__100->SetMaximum(24.2921);
   hframe__100->SetDirectory(0);
   hframe__100->SetStats(0);
   hframe__100->SetLineStyle(0);
   hframe__100->SetMarkerStyle(20);
   hframe__100->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__100->GetXaxis()->SetLabelFont(43);
   hframe__100->GetXaxis()->SetLabelOffset(0.007);
   hframe__100->GetXaxis()->SetLabelSize(27);
   hframe__100->GetXaxis()->SetTitleSize(33);
   hframe__100->GetXaxis()->SetTitleOffset(0.9);
   hframe__100->GetXaxis()->SetTitleFont(43);
   hframe__100->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__100->GetYaxis()->SetLabelFont(43);
   hframe__100->GetYaxis()->SetLabelOffset(0.007);
   hframe__100->GetYaxis()->SetLabelSize(27);
   hframe__100->GetYaxis()->SetTitleSize(33);
   hframe__100->GetYaxis()->SetTitleOffset(1.25);
   hframe__100->GetYaxis()->SetTitleFont(43);
   hframe__100->GetZaxis()->SetLabelFont(43);
   hframe__100->GetZaxis()->SetLabelOffset(0.007);
   hframe__100->GetZaxis()->SetLabelSize(27);
   hframe__100->GetZaxis()->SetTitleSize(33);
   hframe__100->GetZaxis()->SetTitleFont(43);
   hframe__100->Draw("sameaxis");
   baselineEWKGenuineTaus5Integral->Modified();
   baselineEWKGenuineTaus5Integral->cd();
   baselineEWKGenuineTaus5Integral->SetSelected(baselineEWKGenuineTaus5Integral);
}
