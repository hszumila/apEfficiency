void Par1()
{
//=========Macro generated from canvas: cc_1/parameter 1
//=========  (Tue May  9 14:42:32 2017) by ROOT version6.08/00
   TCanvas *cc_1 = new TCanvas("cc_1", "parameter 1",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_1->Range(-0.003750001,-0.3253032,0.10875,0.1949779);
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
   -0.06516266,
   -0.0978146,
   -0.1094948,
   -0.08472983,
   -0.05681058,
   -0.04629755,
   -0.02702312,
   -0.02457013,
   -0.02117456,
   -0.01886033,
   -0.01510575,
   -0.01555749,
   -0.01651437,
   -0.007214298,
   -0.003197928,
   0.001669202,
   0.008271349,
   0.011005};
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
   0.1734271,
   0.03881161,
   0.02144739,
   0.01356894,
   0.009509873,
   0.007647934,
   0.004938097,
   0.003650262,
   0.002877329,
   0.002347107,
   0.002013566,
   0.001544313,
   0.00130945,
   0.001186845,
   0.001336855,
   0.001773127,
   0.002382432,
   0.003198774};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.0075,0.0975);
   Graph_Graph1002->SetMinimum(-0.2732751);
   Graph_Graph1002->SetMaximum(0.1429498);
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
