void Par2()
{
//=========Macro generated from canvas: cc_2/parameter 2
//=========  (Tue May  9 15:26:41 2017) by ROOT version6.08/00
   TCanvas *cc_2 = new TCanvas("cc_2", "parameter 2",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_2->Range(-0.003750001,-47.17181,0.10875,210.4047);
   cc_2->SetFillColor(0);
   cc_2->SetBorderMode(0);
   cc_2->SetBorderSize(2);
   cc_2->SetFrameBorderMode(0);
   cc_2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[18] = {
   0.015,
   0.016,
   0.017,
   0.018,
   0.019,
   0.02,
   0.022,
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
   Double_t Graph0_fy1003[18] = {
   6.336634,
   1.391024,
   8.779873,
   11.6153,
   14.17355,
   16.60735,
   22.26161,
   27.5867,
   31.89387,
   35.80459,
   39.20025,
   45.87761,
   51.66888,
   59.5615,
   60.50946,
   63.52469,
   73.20984,
   93.049};
   Double_t Graph0_fex1003[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[18] = {
   1.077181,
   5.633405,
   1.862823,
   1.072482,
   0.7393487,
   0.6308043,
   0.3459315,
   0.304859,
   0.2412964,
   0.2198032,
   0.2207268,
   0.2184061,
   0.2532319,
   0.4156059,
   0.9983334,
   2.717152,
   22.28035,
   74.42632};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.0075,0.0975);
   Graph_Graph1003->SetMinimum(-21.41415);
   Graph_Graph1003->SetMaximum(184.6471);
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
