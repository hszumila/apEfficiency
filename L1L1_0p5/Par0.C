void Par0()
{
//=========Macro generated from canvas: cc_0/parameter 0
//=========  (Tue May  9 14:42:32 2017) by ROOT version6.08/00
   TCanvas *cc_0 = new TCanvas("cc_0", "parameter 0",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_0->Range(-0.003750001,-2.187475,0.10875,0.5778117);
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
   -0.9761384,
   -0.4378314,
   -0.4657782,
   -0.6165827,
   -0.2916919,
   -0.3313311,
   -0.1444521,
   -0.1529881,
   -0.1438021,
   -0.1252883,
   -0.09878433,
   -0.1054003,
   -0.1122597,
   -0.05233577,
   -0.02020567,
   0.02017254,
   0.07498144,
   0.1049801};
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
   0.7504558,
   0.1900083,
   0.1009098,
   0.06741541,
   0.04418952,
   0.03272908,
   0.01929525,
   0.01443369,
   0.01161726,
   0.009766678,
   0.008580886,
   0.006876717,
   0.005981633,
   0.005576578,
   0.006117107,
   0.007514736,
   0.009459362,
   0.01195041};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.0075,0.0975);
   Graph_Graph1001->SetMinimum(-1.910947);
   Graph_Graph1001->SetMaximum(0.301283);
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
