void Par1()
{
//=========Macro generated from canvas: cc_1/parameter 1
//=========  (Tue May  9 15:49:50 2017) by ROOT version6.08/00
   TCanvas *cc_1 = new TCanvas("cc_1", "parameter 1",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_1->Range(-0.003750001,141.25,0.10875,142.75);
   cc_1->SetFillColor(0);
   cc_1->SetBorderMode(0);
   cc_1->SetBorderSize(2);
   cc_1->SetFrameBorderMode(0);
   cc_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[18] = {
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
   Double_t Graph0_fy1002[18] = {
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5,
   141.5};
   Double_t Graph0_fex1002[18] = {
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
   Double_t Graph0_fey1002[18] = {
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
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.0075,0.0975);
   Graph_Graph1002->SetMinimum(141.4);
   Graph_Graph1002->SetMaximum(142.6);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4171357,0.9343782,0.5828643,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Graph");
   pt->Draw();
   cc_1->Modified();
   cc_1->cd();
   cc_1->SetSelected(cc_1);
}
