void Par3()
{
//=========Macro generated from canvas: cc_3/parameter 3
//=========  (Tue May  9 14:42:32 2017) by ROOT version6.08/00
   TCanvas *cc_3 = new TCanvas("cc_3", "parameter 3",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_3->Range(-0.003750001,-0.008824879,0.10875,0.007742343);
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
   -0.0005412681,
   6.947333e-05,
   -2.31705e-05,
   -0.0004729866,
   -0.000177823,
   -0.0002308813,
   -8.509081e-05,
   -7.832496e-05,
   -7.375174e-05,
   -5.563656e-05,
   -4.224904e-05,
   -3.535439e-05,
   -3.06312e-05,
   -1.907215e-05,
   -1.010116e-05,
   -1.220862e-06,
   1.05837e-05,
   2.087706e-05};
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
   0.005522407,
   0.000158415,
   0.0004538285,
   0.0002231843,
   0.0001110046,
   4.65394e-05,
   1.827271e-05,
   9.664146e-06,
   5.664143e-06,
   3.877063e-06,
   2.890113e-06,
   1.66078e-06,
   1.300774e-06,
   9.97946e-07,
   1.148777e-06,
   1.832096e-06,
   3.183818e-06,
   4.928925e-06};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.0075,0.0975);
   Graph_Graph1004->SetMinimum(-0.007168157);
   Graph_Graph1004->SetMaximum(0.006085621);
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
