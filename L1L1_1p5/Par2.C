void Par2()
{
//=========Macro generated from canvas: cc_2/parameter 2
//=========  (Tue May  9 15:39:49 2017) by ROOT version6.08/00
   TCanvas *cc_2 = new TCanvas("cc_2", "parameter 2",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_2->Range(0.007499999,-0.0141795,0.1065,0.01863851);
   cc_2->SetFillColor(0);
   cc_2->SetBorderMode(0);
   cc_2->SetBorderSize(2);
   cc_2->SetFrameBorderMode(0);
   cc_2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[11] = {
   0.024,
   0.026,
   0.028,
   0.03,
   0.035,
   0.04,
   0.05,
   0.06,
   0.07,
   0.08,
   0.09};
   Double_t Graph0_fy1003[11] = {
   0.002229504,
   0.003206948,
   -0.002679437,
   -0.003340591,
   -0.000451387,
   0.0006354729,
   0.0006878342,
   0.0004761043,
   -0.0005497598,
   -0.000764508,
   -0.002014007};
   Double_t Graph0_fex1003[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[11] = {
   0.01093934,
   0.004429528,
   0.002095032,
   0.001049438,
   0.0004104303,
   0.0002199884,
   0.0001254152,
   0.0001210816,
   0.0001659669,
   0.0002995044,
   0.0004065767};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.0174,0.0966);
   Graph_Graph1003->SetMinimum(-0.0108977);
   Graph_Graph1003->SetMaximum(0.01535671);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4171357,0.9343782,0.5828643,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Graph");
   pt->Draw();
   cc_2->Modified();
   cc_2->cd();
   cc_2->SetSelected(cc_2);
}
