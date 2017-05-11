void Par3()
{
//=========Macro generated from canvas: cc_3/parameter 3
//=========  (Tue May  9 15:39:49 2017) by ROOT version6.08/00
   TCanvas *cc_3 = new TCanvas("cc_3", "parameter 3",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_3->Range(0.007499999,-0.004684304,0.1065,0.002886078);
   cc_3->SetFillColor(0);
   cc_3->SetBorderMode(0);
   cc_3->SetBorderSize(2);
   cc_3->SetFrameBorderMode(0);
   cc_3->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[11] = {
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
   Double_t Graph0_fy1004[11] = {
   -0.0008991128,
   -0.0008450369,
   -0.0001521464,
   -3.502211e-05,
   -8.772516e-05,
   -6.743953e-05,
   -3.973305e-05,
   -2.474718e-05,
   -4.281287e-06,
   -1.162434e-05,
   1.450556e-05};
   Double_t Graph0_fex1004[11] = {
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
   Double_t Graph0_fey1004[11] = {
   0.002523461,
   0.0004165261,
   0.000141362,
   4.918034e-05,
   1.392396e-05,
   5.515431e-06,
   2.399416e-06,
   2.127373e-06,
   3.058153e-06,
   7.307192e-06,
   1.058689e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.0174,0.0966);
   Graph_Graph1004->SetMinimum(-0.003927266);
   Graph_Graph1004->SetMaximum(0.00212904);
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
