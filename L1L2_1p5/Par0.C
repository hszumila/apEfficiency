void Par0()
{
//=========Macro generated from canvas: cc_0/parameter 0
//=========  (Tue May  9 15:49:50 2017) by ROOT version6.08/00
   TCanvas *cc_0 = new TCanvas("cc_0", "parameter 0",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_0->Range(-0.003750001,0.72,0.10875,2.22);
   cc_0->SetFillColor(0);
   cc_0->SetBorderMode(0);
   cc_0->SetBorderSize(2);
   cc_0->SetFrameBorderMode(0);
   cc_0->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[18] = {
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
   Double_t Graph0_fy1001[18] = {
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97,
   0.97};
   Double_t Graph0_fex1001[18] = {
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
   Double_t Graph0_fey1001[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.0075,0.0975);
   Graph_Graph1001->SetMinimum(0.87);
   Graph_Graph1001->SetMaximum(2.07);
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
