void Par2()
{
//=========Macro generated from canvas: cc_2/parameter 2
//=========  (Tue May  9 16:09:04 2017) by ROOT version6.08/00
   TCanvas *cc_2 = new TCanvas("cc_2", "parameter 2",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_2->Range(-0.003750001,-39.55672,0.10875,89.56869);
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
   13.70109,
   23.75829,
   2.363553,
   12.15182,
   10.49087,
   7.387605,
   10.05758,
   10.48104,
   11.35277,
   11.50865,
   11.98042,
   13.8268,
   13.51363,
   16.9197,
   12.61411,
   40.3043,
   0,
   0};
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
   31.73691,
   31.91849,
   0.7374206,
   2.952172,
   1.180751,
   0.5483347,
   0.4492454,
   0.3260404,
   0.2912389,
   0.3092514,
   0.2861262,
   0.3056865,
   0.4105686,
   1.682507,
   3.317275,
   27.74349,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.0075,0.0975);
   Graph_Graph1003->SetMinimum(-26.64418);
   Graph_Graph1003->SetMaximum(76.65615);
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
