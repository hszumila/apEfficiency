void Par3()
{
//=========Macro generated from canvas: cc_3/parameter 3
//=========  (Tue May  9 15:26:41 2017) by ROOT version6.08/00
   TCanvas *cc_3 = new TCanvas("cc_3", "parameter 3",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_3->Range(-0.003750001,-4.168467,0.10875,37.5162);
   cc_3->SetFillColor(0);
   cc_3->SetBorderMode(0);
   cc_3->SetBorderSize(2);
   cc_3->SetFrameBorderMode(0);
   cc_3->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[18] = {
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
   Double_t Graph0_fy1004[18] = {
   3.435809,
   12.35612,
   11.17213,
   10.55249,
   10.61501,
   12.0217,
   10.93297,
   11.87117,
   11.43011,
   11.44613,
   12.1294,
   11.88133,
   11.93663,
   12.24554,
   12.61527,
   14.57311,
   15.65885,
   22.06171};
   Double_t Graph0_fex1004[18] = {
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
   Double_t Graph0_fey1004[18] = {
   1.099896,
   4.891935,
   2.340401,
   0.968608,
   0.6099692,
   0.6540263,
   0.2934885,
   0.2522318,
   0.1800412,
   0.1621943,
   0.1505668,
   0.1259987,
   0.1222904,
   0.1718973,
   0.2855514,
   0.6247272,
   1.817629,
   8.466764};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.0075,0.0975);
   Graph_Graph1004->SetMinimum(0);
   Graph_Graph1004->SetMaximum(33.34773);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4171357,0.9343782,0.5828643,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Graph");
   pt->Draw();
   cc_3->Modified();
   cc_3->cd();
   cc_3->SetSelected(cc_3);
}
