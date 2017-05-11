void Par4()
{
//=========Macro generated from canvas: cc_4/parameter 4
//=========  (Tue May  9 15:49:50 2017) by ROOT version6.08/00
   TCanvas *cc_4 = new TCanvas("cc_4", "parameter 4",0,0,800,800);
   gStyle->SetOptFit(1);
   cc_4->Range(-0.003750001,-1538.07,0.10875,2432.767);
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
   0,
   4.433017e-05,
   0.01824158,
   0.02911427,
   0.02810212,
   447.3485,
   0.06466008,
   0.07620588,
   0.1046645,
   0.1211728,
   0.1417313,
   0.1778245,
   0.197828,
   0.1711277,
   0.1212014,
   0.04290644,
   0.1629582,
   0.0333193};
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
   0,
   1.414214,
   0.05054952,
   0.01458126,
   0.007045347,
   1323.612,
   0.005065746,
   0.003861308,
   0.004077723,
   0.003979946,
   0.004111902,
   0.00444727,
   0.004821998,
   0.006398435,
   0.00791556,
   0.004415308,
   0.865226,
   0.06678142};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,0.0075,0.0975);
   Graph_Graph1005->SetMinimum(-1140.986);
   Graph_Graph1005->SetMaximum(2035.683);
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
