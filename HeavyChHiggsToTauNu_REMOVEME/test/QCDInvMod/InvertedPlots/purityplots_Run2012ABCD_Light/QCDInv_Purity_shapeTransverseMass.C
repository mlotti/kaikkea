{
//=========Macro generated from canvas: purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass/
//=========  (Wed Jul 23 15:17:25 2014) by ROOT version5.32/00
   TCanvas *purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass = new TCanvas("purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass", "",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetHighLightColor(2);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->Range(-101.2658,-0.1585366,531.6456,1.060976);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetFillColor(0);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetBorderMode(0);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetBorderSize(2);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetTickx(1);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetTicky(1);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetLeftMargin(0.16);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetRightMargin(0.05);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetTopMargin(0.05);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetBottomMargin(0.13);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetFrameFillStyle(0);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetFrameBorderMode(0);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetFrameFillStyle(0);
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","",1000,0,500);
   hframe__1->SetMinimum(0);
   hframe__1->SetMaximum(1);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);
   hframe__1->SetLineStyle(0);
   hframe__1->SetMarkerStyle(20);
   hframe__1->GetXaxis()->SetTitle("m_{T}(tau,MET), GeV/c^{2}");
   hframe__1->GetXaxis()->SetLabelFont(43);
   hframe__1->GetXaxis()->SetLabelOffset(0.007);
   hframe__1->GetXaxis()->SetLabelSize(27);
   hframe__1->GetXaxis()->SetTitleSize(33);
   hframe__1->GetXaxis()->SetTitleOffset(0.9);
   hframe__1->GetXaxis()->SetTitleFont(43);
   hframe__1->GetYaxis()->SetTitle("Purity");
   hframe__1->GetYaxis()->SetLabelFont(43);
   hframe__1->GetYaxis()->SetLabelOffset(0.007);
   hframe__1->GetYaxis()->SetLabelSize(27);
   hframe__1->GetYaxis()->SetTitleSize(33);
   hframe__1->GetYaxis()->SetTitleOffset(1.25);
   hframe__1->GetYaxis()->SetTitleFont(43);
   hframe__1->GetZaxis()->SetLabelFont(43);
   hframe__1->GetZaxis()->SetLabelOffset(0.007);
   hframe__1->GetZaxis()->SetLabelSize(27);
   hframe__1->GetZaxis()->SetTitleSize(33);
   hframe__1->GetZaxis()->SetTitleFont(43);
   hframe__1->Draw(" ");
   Double_t xAxis1[11] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 200, 500}; 
   
   TH1F *shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2 = new TH1F("shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2","#tau p_{T}<50",10, xAxis1);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(1,0.6714677);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(2,0.5735079);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(3,0.6583971);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(4,0.6798918);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(5,0.6948386);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(6,0.6779561);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(7,0.575135);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(8,0.4681449);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(9,0.2163306);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinContent(10,0.2090706);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(1,0.0677924);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(2,0.06182088);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(3,0.03626659);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(4,0.03159658);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(5,0.03208286);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(6,0.03682522);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(7,0.04589669);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(8,0.05614011);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(9,0.04956794);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetBinError(10,0.07303558);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetEntries(10);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetDirectory(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#009900");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetLineColor(ci);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetLineWidth(3);

   ci = TColor::GetColor("#009900");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetMarkerColor(ci);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->SetMarkerStyle(23);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetXaxis()->SetTitle("m_{T}(tau,MET), GeV/c^{2}");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetXaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetXaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetXaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetXaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetYaxis()->SetTitle("N_{events}");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetYaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetYaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetYaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetYaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetZaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetZaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetZaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->GetZaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__2->Draw(" same");
   Double_t xAxis2[11] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 200, 500}; 
   
   TH1F *shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3 = new TH1F("shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3","#tau p_{T}<50",10, xAxis2);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(1,0.6714677);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(2,0.5735079);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(3,0.6583971);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(4,0.6798918);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(5,0.743163);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(6,0.744377);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(7,0.6680712);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(8,0.4954294);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(9,0.373342);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinContent(10,0.3942856);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(1,0.0677924);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(2,0.06182088);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(3,0.03626659);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(4,0.03159658);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(5,0.02741284);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(6,0.0267458);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(7,0.03265143);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(8,0.04319162);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(9,0.04397198);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetBinError(10,0.0625712);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetEntries(10);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetLineColor(ci);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetMarkerColor(ci);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->SetMarkerStyle(27);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetXaxis()->SetTitle("m_{T}(tau,MET), GeV/c^{2}");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetXaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetXaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetXaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetXaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetYaxis()->SetTitle("N_{events}");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetYaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetYaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetYaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetYaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetZaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetZaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetZaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->GetZaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__3->Draw(" same");
   Double_t xAxis3[11] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 200, 500}; 
   
   TH1F *shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4 = new TH1F("shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4","#tau p_{T}<50",10, xAxis3);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(1,0.6714677);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(2,0.5735079);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(3,0.6583971);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(4,0.6798918);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(5,0.7622808);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(6,0.8012554);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(7,0.7252743);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(8,0.6009799);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(9,0.5181715);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinContent(10,0.4345568);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(1,0.0677924);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(2,0.06182088);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(3,0.03626659);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(4,0.03159658);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(5,0.02553097);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(6,0.01997776);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(7,0.02464699);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(8,0.03301536);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(9,0.03376455);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetBinError(10,0.04814651);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetEntries(10);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetLineColor(ci);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetMarkerColor(ci);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->SetMarkerStyle(26);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetXaxis()->SetTitle("m_{T}(tau,MET), GeV/c^{2}");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetXaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetXaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetXaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetXaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetYaxis()->SetTitle("N_{events}");
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetYaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetYaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetYaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetYaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetZaxis()->SetLabelFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetZaxis()->SetLabelSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetZaxis()->SetTitleSize(0.035);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->GetZaxis()->SetTitleFont(42);
   shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated__4->Draw(" same");
   
   TLegend *leg = new TLegend(0.68,0.62,0.88,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(4000);
   TLegendEntry *entry=leg->AddEntry("shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated","Loose R_{bb}^{min.}","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated","Medium R_{bb}^{min.}","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("shapeTransverseMass0_Tau_190456193621_2012A_Jan22_clonedIntegrated","Tight R_{bb}^{min.}","lp");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1F *hframe__5 = new TH1F("hframe__5","",1000,0,500);
   hframe__5->SetMinimum(0);
   hframe__5->SetMaximum(1);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineStyle(0);
   hframe__5->SetMarkerStyle(20);
   hframe__5->GetXaxis()->SetTitle("m_{T}(tau,MET), GeV/c^{2}");
   hframe__5->GetXaxis()->SetLabelFont(43);
   hframe__5->GetXaxis()->SetLabelOffset(0.007);
   hframe__5->GetXaxis()->SetLabelSize(27);
   hframe__5->GetXaxis()->SetTitleSize(33);
   hframe__5->GetXaxis()->SetTitleOffset(0.9);
   hframe__5->GetXaxis()->SetTitleFont(43);
   hframe__5->GetYaxis()->SetTitle("Purity");
   hframe__5->GetYaxis()->SetLabelFont(43);
   hframe__5->GetYaxis()->SetLabelOffset(0.007);
   hframe__5->GetYaxis()->SetLabelSize(27);
   hframe__5->GetYaxis()->SetTitleSize(33);
   hframe__5->GetYaxis()->SetTitleOffset(1.25);
   hframe__5->GetYaxis()->SetTitleFont(43);
   hframe__5->GetZaxis()->SetLabelFont(43);
   hframe__5->GetZaxis()->SetLabelOffset(0.007);
   hframe__5->GetZaxis()->SetLabelSize(27);
   hframe__5->GetZaxis()->SetTitleSize(33);
   hframe__5->GetZaxis()->SetTitleFont(43);
   hframe__5->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.62,0.96,"CMS preliminary");
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
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->Modified();
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->cd();
   purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass->SetSelected(purityplots_Run2012ABCD_Light/QCDInv_Purity_shapeTransverseMass);
}
