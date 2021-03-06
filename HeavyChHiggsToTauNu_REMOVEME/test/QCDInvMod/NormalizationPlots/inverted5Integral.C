{
//=========Macro generated from canvas: inverted5Integral/
//=========  (Sun Jul 20 15:00:37 2014) by ROOT version5.32/00
   TCanvas *inverted5Integral = new TCanvas("inverted5Integral", "",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   inverted5Integral->SetHighLightColor(2);
   inverted5Integral->Range(-101.2658,-1.764011,531.6456,4.112999);
   inverted5Integral->SetFillColor(0);
   inverted5Integral->SetBorderMode(0);
   inverted5Integral->SetBorderSize(2);
   inverted5Integral->SetLogy();
   inverted5Integral->SetTickx(1);
   inverted5Integral->SetTicky(1);
   inverted5Integral->SetLeftMargin(0.16);
   inverted5Integral->SetRightMargin(0.05);
   inverted5Integral->SetTopMargin(0.05);
   inverted5Integral->SetBottomMargin(0.13);
   inverted5Integral->SetFrameFillStyle(0);
   inverted5Integral->SetFrameBorderMode(0);
   inverted5Integral->SetFrameFillStyle(0);
   inverted5Integral->SetFrameBorderMode(0);
   
   TH1F *hframe__91 = new TH1F("hframe__91","",1000,0,500);
   hframe__91->SetMinimum(0.1);
   hframe__91->SetMaximum(6594);
   hframe__91->SetDirectory(0);
   hframe__91->SetStats(0);
   hframe__91->SetLineStyle(0);
   hframe__91->SetMarkerStyle(20);
   hframe__91->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__91->GetXaxis()->SetLabelFont(43);
   hframe__91->GetXaxis()->SetLabelOffset(0.007);
   hframe__91->GetXaxis()->SetLabelSize(27);
   hframe__91->GetXaxis()->SetTitleSize(33);
   hframe__91->GetXaxis()->SetTitleOffset(0.9);
   hframe__91->GetXaxis()->SetTitleFont(43);
   hframe__91->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__91->GetYaxis()->SetLabelFont(43);
   hframe__91->GetYaxis()->SetLabelOffset(0.007);
   hframe__91->GetYaxis()->SetLabelSize(27);
   hframe__91->GetYaxis()->SetTitleSize(33);
   hframe__91->GetYaxis()->SetTitleOffset(1.25);
   hframe__91->GetYaxis()->SetTitleFont(43);
   hframe__91->GetZaxis()->SetLabelFont(43);
   hframe__91->GetZaxis()->SetLabelOffset(0.007);
   hframe__91->GetZaxis()->SetLabelSize(27);
   hframe__91->GetZaxis()->SetTitleSize(33);
   hframe__91->GetZaxis()->SetTitleFont(43);
   hframe__91->Draw(" ");
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
      tex = new TLatex(0.4,0.7,"Integral = 14794 ev");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(27);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5 = new TH1F("Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5","#tau p_{T}=100..120",50,0,500);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(1,1112);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(2,2873);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(3,3297);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(4,2745);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(5,1882);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(6,1165);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(7,670);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(8,390);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(9,202);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(10,126);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(11,77);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(12,54);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(13,37);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(14,27);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(15,17);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(16,16);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(17,23);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(18,11);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(19,6);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(20,11);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(21,8);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(22,9);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(23,9);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(24,4);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(25,3);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(26,4);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(27,5);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(28,4);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(29,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(30,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(32,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(33,3);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(34,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinContent(51,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(1,33.34666);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(2,53.60037);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(3,57.41951);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(4,52.39275);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(5,43.38202);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(6,34.1321);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(7,25.88436);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(8,19.74842);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(9,14.21267);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(10,11.22497);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(11,8.774964);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(12,7.348469);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(13,6.082763);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(14,5.196152);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(15,4.123106);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(16,4);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(17,4.795832);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(18,3.316625);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(19,2.44949);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(20,3.316625);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(21,2.828427);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(22,3);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(23,3);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(24,2);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(25,1.732051);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(26,2);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(27,2.236068);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(28,2);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(29,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(30,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(32,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(33,1.732051);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(34,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetBinError(51,1);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetEntries(14795);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetFillColor(ci);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetLineWidth(2);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetMarkerStyle(20);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->SetMarkerSize(1.2);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetXaxis()->SetLabelFont(42);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetXaxis()->SetLabelSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetXaxis()->SetTitleSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetXaxis()->SetTitleFont(42);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetYaxis()->SetTitle("Events / 10 GeV");
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetYaxis()->SetLabelFont(42);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetYaxis()->SetLabelSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetYaxis()->SetTitleSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetYaxis()->SetTitleOffset(1.5);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetYaxis()->SetTitleFont(42);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetZaxis()->SetLabelFont(42);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetZaxis()->SetLabelSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetZaxis()->SetTitleSize(0.035);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->GetZaxis()->SetTitleFont(42);
   Inverted/METInvertedTauIdAfterCollinearCuts/METInvertedTauIdAfterCollinearCuts5->Draw("HIST same");
   
   TH1F *hframe__92 = new TH1F("hframe__92","",1000,0,500);
   hframe__92->SetMinimum(0.1);
   hframe__92->SetMaximum(6594);
   hframe__92->SetDirectory(0);
   hframe__92->SetStats(0);
   hframe__92->SetLineStyle(0);
   hframe__92->SetMarkerStyle(20);
   hframe__92->GetXaxis()->SetTitle("Type1 PFMET (GeV)");
   hframe__92->GetXaxis()->SetLabelFont(43);
   hframe__92->GetXaxis()->SetLabelOffset(0.007);
   hframe__92->GetXaxis()->SetLabelSize(27);
   hframe__92->GetXaxis()->SetTitleSize(33);
   hframe__92->GetXaxis()->SetTitleOffset(0.9);
   hframe__92->GetXaxis()->SetTitleFont(43);
   hframe__92->GetYaxis()->SetTitle("Events / 10 GeV");
   hframe__92->GetYaxis()->SetLabelFont(43);
   hframe__92->GetYaxis()->SetLabelOffset(0.007);
   hframe__92->GetYaxis()->SetLabelSize(27);
   hframe__92->GetYaxis()->SetTitleSize(33);
   hframe__92->GetYaxis()->SetTitleOffset(1.25);
   hframe__92->GetYaxis()->SetTitleFont(43);
   hframe__92->GetZaxis()->SetLabelFont(43);
   hframe__92->GetZaxis()->SetLabelOffset(0.007);
   hframe__92->GetZaxis()->SetLabelSize(27);
   hframe__92->GetZaxis()->SetTitleSize(33);
   hframe__92->GetZaxis()->SetTitleFont(43);
   hframe__92->Draw("sameaxis");
   inverted5Integral->Modified();
   inverted5Integral->cd();
   inverted5Integral->SetSelected(inverted5Integral);
}
