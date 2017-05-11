void Par4()
{
//=========Macro generated from canvas: cc_4/parameter 4
//=========  (Tue May  9 15:26:41 2017) by ROOT version6.08/00
   TCanvas *cc_4 = new TCanvas("cc_4", "parameter 4",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_4->Range(-0.003750001,-1.493791,0.10875,4.887434);
   cc_4->SetFillColor(0);
   cc_4->SetBorderMode(0);
   cc_4->SetBorderSize(2);
   cc_4->SetFrameBorderMode(0);
   cc_4->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[18] = {
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
   Double_t Graph0_fy1005[18] = {
   2.536222,
   0.4190038,
   0.1433264,
   0.1828537,
   0.2254704,
   0.2133902,
   0.2860172,
   0.2893562,
   0.3377712,
   0.3686532,
   0.375435,
   0.4106461,
   0.4014703,
   0.344391,
   0.225389,
   0.1503937,
   0.1648556,
   0.1611525};
   Double_t Graph0_fex1005[18] = {
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
   Double_t Graph0_fey1005[18] = {
   1.287675,
   0.06880644,
   0.02116297,
   0.0161594,
   0.01421013,
   0.0116033,
   0.009731946,
   0.008069785,
   0.007813762,
   0.007664832,
   0.007212206,
   0.007271891,
   0.00750485,
   0.01035348,
   0.01313132,
   0.0198976,
   0.1730935,
   0.591406};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,0.0075,0.0975);
   Graph_Graph1005->SetMinimum(-0.8556685);
   Graph_Graph1005->SetMaximum(4.249312);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4171357,0.9343782,0.5828643,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Graph");
   pt->Draw();
   cc_4->Modified();
   cc_4->cd();
   cc_4->SetSelected(cc_4);
}
