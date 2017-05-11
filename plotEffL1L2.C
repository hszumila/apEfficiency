// Crystal ball peak function
Double_t CrystalBall(Double_t *x,Double_t *par) {
  Double_t sigma = ((Double_t)par[3]);
  if (par[3]<0){sigma = -par[3];}
  Double_t t = (x[0]-par[2])/sigma;
  if (par[0] < 0) t = -t;
  Double_t absAlpha = fabs((Double_t)par[0]);
  if (t >= -absAlpha) {
    return par[4]*exp(-0.5*t*t);
  }
  else {
    Double_t a =  TMath::Power(par[1]/absAlpha,par[1])*exp(-0.5*absAlpha*absAlpha);
    Double_t b= par[1]/absAlpha - absAlpha; 

    return par[4]*(a/TMath::Power(b - t, par[1]));
  }
}





int plotEffL1L2(){

  //L1L2, 0.5mm cuts:
  TCut cut = "eleClY*posClY<0&&((!eleHasL1&&posHasL1)||(eleHasL1&&!posHasL1))&&uncP>0.8*1.056&max(eleTrkChisq,posTrkChisq)<30&&eleP<0.75*1.056&&min(eleMinPositiveIso+0.5*(eleTrkZ0-5*elePY/eleP)*sign(elePY),posMinPositiveIso+0.5*(posTrkZ0-5*posPY/posP)*sign(posPY))>0&&bscChisq<10&&bscChisq-uncChisq<5&&uncP<1.15*1.056&&max(eleMatchChisq,posMatchChisq)<10&&abs(eleP-posP)/(eleP+posP)<0.4&&posTrkD0<1.5";

  
  //input truth file
  TFile *fTruth = new TFile("../truth/apsignalTruthAll.root");
  //TFile *fTruth = new TFile("../mc/long/hps_aplong2_truth.root");
  TTree *ntupleT = (TTree*)fTruth->Get("ntuple");

  //input recon file
  TFile *fRecon = new TFile("../mc/disp/hps_apdisp_tri.root");
  //TFile *fRecon = new TFile("../mc/long/hps_aplong2_all.root");
  TTree *ntupleR = (TTree*)fRecon->Get("ntuple");

  //make output file
  TFile *fout = new TFile("L1L2_0p5/outputEffL1L1.root","RECREATE");

  //aprime masses
  const int nmass = 18;
  double mass[nmass] = {15,16,17,18,19,20,22,24,26,28,30,35,40,50,60,70,80,90};
  double massD[nmass] = {0.015,0.016,0.017,0.018,0.019,0.020,0.022,0.024,0.026,0.028,0.030,0.035,0.040,0.050,0.060,0.070,0.080,0.090};
  double scaling[nmass] = {0.000148065, 0.00064942, 0.00269306, 0.00554362, 0.00816133, 0.0120439, 0.0215775, 0.033638, 0.0458157, 0.0584257, 0.0688089, 0.0932595, 0.110597, 0.100723, 0.0687717, 0.0391607, 0.0217791, 0.0126738};

  
  TH1F *h_gen[nmass];
  TH1F *h_rec[nmass];
  TH1F *h_eff[nmass];
  const int nbins=50;
  TF1 *fn[nmass];
  const int npar = 5;
  double parameter[npar][nmass];
  double parameterErr[npar][nmass];
  
  gROOT->SetBatch(true);
  
  TCanvas *canvas = new TCanvas("canvas"," highZ Plots", 700, 700);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(0);
  canvas->SetFrameFillColor(0);
  canvas->SetFrameBorderMode(0);
  std::string pdf_file_name = "L1L2_0p5/vertexEffFitsL1L2.pdf";
  canvas->Update();

  for (int ii = 0; ii<nmass; ii++){
    //cut for mass
    TCut cutM = Form("triP>0.845&&triM==%f",massD[ii]);
    cout<<"mass:\t"<<massD[ii]<<endl;
    
    //generated ap histo
    h_gen[ii] = new TH1F(Form("h_gen[%d]",ii),Form("Mass %.0f MeV, generated",mass[ii]),nbins,-5,100);
    h_rec[ii] = new TH1F(Form("h_rec[%d]",ii),Form("Mass %.0f MeV, reconstructed",mass[ii]),nbins,-5,100);
    //h_eff[ii] = new TH1F(Form("h_eff[%d]",ii),Form("Mass %.0f MeV, efficiency",mass[ii]),nbins,-5,100);
        
    //fill histo
    ntupleT->Draw(Form("triEndZ>>h_gen[%d]",ii),cutM);    
    ntupleR->Draw(Form("triEndZ>>h_rec[%d]",ii),cutM && cut);
    //ntupleR->Draw(Form("triEndZ>>h_eff[%d]",ii),cutM && cut);
    
    //efficiency histo
    //h_eff[ii]->Divide(h_rec[ii],h_gen[ii]);
    h_eff[ii] = (TH1F*)h_rec[ii]->Clone(Form("h_eff[%d]",ii));
    
    //fit the efficiency histo
    fn[ii] = new TF1(Form("fn[%d]",ii),CrystalBall,-5,100,5);
    h_eff[ii]->Sumw2();
    h_eff[ii]->Divide(h_gen[ii]);

    fn[ii]->FixParameter(0,0.97);
    fn[ii]->FixParameter(1,141.5);
    fn[ii]->SetParameter(2,h_eff[ii]->GetMean());
    fn[ii]->SetParameter(3,h_eff[ii]->GetRMS());
    fn[ii]->SetParameter(4,h_eff[ii]->GetMaximum());
    h_eff[ii]->Scale(1./scaling[ii]);
    h_eff[ii]->Fit(fn[ii],"RQ");
    for (int nn=0; nn<npar; nn++){
      parameter[nn][ii] = fn[ii]->GetParameter(nn);
      parameterErr[nn][ii] = fn[ii]->GetParError(nn);
    }
    h_eff[ii]->GetYaxis()->SetRangeUser(0,1.2);
    h_eff[ii]->GetYaxis()->SetTitle("efficiency");
    h_eff[ii]->GetXaxis()->SetTitle("z vertex [mm]");
    gStyle->SetOptFit(1111);
    h_eff[ii]->Draw("HIST");
    fn[ii]->Draw("same");
    canvas->Print( (pdf_file_name + "(").c_str());
    
  }//end loop mass
  canvas->Print( (pdf_file_name + ")").c_str());

  //plot the fit parameters
   TCanvas *cc[npar];
  for (int kk=0; kk<npar; kk++){
    cc[kk] = new TCanvas(Form("cc_%d",kk),Form("parameter %d",kk),800,800);
    cc[kk]->cd();
    TGraphErrors *gg = new TGraphErrors(nmass,massD,parameter[kk],0,parameterErr[kk]);
    gg->Draw("alp");
    cc[kk]->Update();
    cc[kk]->SaveAs(Form("L1L2_0p5/Par%d.C",kk));
    cc[kk]->Close();
  
  }
  
  fout->Write();
  fout->Close();
  
  return 1;
}
