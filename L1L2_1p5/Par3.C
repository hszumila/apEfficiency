void Par3()
{
//=========Macro generated from canvas: cc_3/parameter 3
//=========  (Tue May  9 15:49:50 2017) by ROOT version6.08/00
   TCanvas *cc_3 = new TCanvas("cc_3", "parameter 3",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_3->Range(-0.003750001,-414.2295,0.10875,458.5457);
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
   0,
   0,
   22.15807,
   2.600667,
   7.490417,
   58.22094,
   8.219142,
   10.11087,
   9.616476,
   9.921996,
   10.17069,
   10.61275,
   10.74138,
   11.93905,
   12.57877,
   11.23386,
   18.33555,
   26.89204};
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
   0,
   1.414214,
   290.9251,
   1.024802,
   5.017876,
   17.33899,
   0.7257199,
   0.5037293,
   0.318215,
   0.2607586,
   0.2163122,
   0.1697098,
   0.1504686,
   0.2270383,
   0.367977,
   0.9970516,
   2.184688,
   11.92675};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.0075,0.0975);
   Graph_Graph1004->SetMinimum(-326.952);
   Graph_Graph1004->SetMaximum(371.2681);
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
