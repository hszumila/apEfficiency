void Par2()
{
//=========Macro generated from canvas: cc_2/parameter 2
//=========  (Tue May  9 14:42:32 2017) by ROOT version6.08/00
   TCanvas *cc_2 = new TCanvas("cc_2", "parameter 2",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_2->Range(-0.003750001,-0.04623119,0.10875,0.09284477);
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
   0.02330679,
   -0.001701403,
   -0.003383581,
   0.00535339,
   -0.0005835224,
   0.002839287,
   -5.197337e-05,
   0.0008139282,
   0.001148476,
   0.0009612755,
   0.0007189468,
   0.0009277449,
   0.00103435,
   0.0005552033,
   0.0001179348,
   -0.000479165,
   -0.001292332,
   -0.001893817};
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
   0.04635865,
   0.007658873,
   0.006524581,
   0.00371295,
   0.002245985,
   0.0013027,
   0.0006307599,
   0.0003872264,
   0.0002623416,
   0.0001945631,
   0.0001555186,
   0.0001034592,
   8.406673e-05,
   7.017116e-05,
   8.032823e-05,
   0.0001182842,
   0.0001793483,
   0.0002662637};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.0075,0.0975);
   Graph_Graph1003->SetMinimum(-0.03232359);
   Graph_Graph1003->SetMaximum(0.07893718);
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
