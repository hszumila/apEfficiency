void Par2()
{
//=========Macro generated from canvas: cc_2/parameter 2
//=========  (Tue May  9 15:49:50 2017) by ROOT version6.08/00
   TCanvas *cc_2 = new TCanvas("cc_2", "parameter 2",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_2->Range(-0.003750001,-524.0914,0.10875,461.9628);
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
   0,
   0.325,
   13.04656,
   2.373638,
   1.496036,
   -252.5919,
   6.058462,
   11.17293,
   17.08315,
   22.14993,
   25.791,
   35.24124,
   42.0313,
   52.00172,
   53.85844,
   37.546,
   85.20434,
   68.31764};
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
   0,
   0,
   284.5738,
   1.061355,
   2.374122,
   107.1572,
   0.630411,
   0.5013658,
   0.3432221,
   0.2966441,
   0.265404,
   0.2426889,
   0.2451119,
   0.4455759,
   1.116122,
   2.336704,
   98.8263,
   52.92032};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.0075,0.0975);
   Graph_Graph1003->SetMinimum(-425.486);
   Graph_Graph1003->SetMaximum(363.3573);
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
