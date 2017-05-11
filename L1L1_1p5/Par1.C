void Par1()
{
//=========Macro generated from canvas: cc_1/parameter 1
//=========  (Tue May  9 15:39:49 2017) by ROOT version6.08/00
   TCanvas *cc_1 = new TCanvas("cc_1", "parameter 1",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_1->Range(0.007499999,-0.3769246,0.1065,0.08782254);
   cc_1->SetFillColor(0);
   cc_1->SetBorderMode(0);
   cc_1->SetBorderSize(2);
   cc_1->SetFrameBorderMode(0);
   cc_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[11] = {
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
   Double_t Graph0_fy1002[11] = {
   -0.2309637,
   -0.1418665,
   -0.1136093,
   -0.07168575,
   -0.03702499,
   -0.03031404,
   -0.01511917,
   -0.01198315,
   -0.005333496,
   -0.0007554067,
   0.006762259};
   Double_t Graph0_fex1002[11] = {
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
   Double_t Graph0_fey1002[11] = {
   0.06850309,
   0.01479422,
   0.006949506,
   0.004773162,
   0.002717349,
   0.001986019,
   0.001535886,
   0.001607163,
   0.0020607,
   0.002803788,
   0.003602426};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.0174,0.0966);
   Graph_Graph1002->SetMinimum(-0.3304499);
   Graph_Graph1002->SetMaximum(0.04134783);
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
