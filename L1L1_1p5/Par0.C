void Par0()
{
//=========Macro generated from canvas: cc_0/parameter 0
//=========  (Tue May  9 15:39:49 2017) by ROOT version6.08/00
   TCanvas *cc_0 = new TCanvas("cc_0", "parameter 0",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_0->Range(0.007499999,-1.852868,0.1065,0.4895982);
   cc_0->SetFillColor(0);
   cc_0->SetBorderMode(0);
   cc_0->SetBorderSize(2);
   cc_0->SetFrameBorderMode(0);
   cc_0->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[11] = {
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
   Double_t Graph0_fy1001[11] = {
   -1.322944,
   -0.8951334,
   -0.52008,
   -0.2792813,
   -0.1848059,
   -0.1758889,
   -0.09775837,
   -0.07491208,
   -0.01346099,
   0.01388134,
   0.0859784};
   Double_t Graph0_fex1001[11] = {
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
   Double_t Graph0_fey1001[11] = {
   0.1395136,
   0.06545862,
   0.03397222,
   0.02086647,
   0.01097878,
   0.007848065,
   0.006269087,
   0.006698745,
   0.008202382,
   0.01063278,
   0.01320875};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.0174,0.0966);
   Graph_Graph1001->SetMinimum(-1.618622);
   Graph_Graph1001->SetMaximum(0.2553516);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4171357,0.9343782,0.5828643,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Graph");
   pt->Draw();
   cc_0->Modified();
   cc_0->cd();
   cc_0->SetSelected(cc_0);
}
