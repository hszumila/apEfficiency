int plotEffL1L1(){

  //L1L1, 0.5mm cuts:
  TCut cut = "eleClY*posClY<0&&eleHasL1&&posHasL1&&uncP>0.8*1.056&max(eleTrkChisq,posTrkChisq)<30&&eleP<0.75*1.056&&min(eleMinPositiveIso+0.5*(eleTrkZ0-5*elePY/eleP)*sign(elePY),posMinPositiveIso+0.5*(posTrkZ0-5*posPY/posP)*sign(posPY))>0&&bscChisq<10&&bscChisq-uncChisq<5&&uncP<1.15*1.056&&max(eleMatchChisq,posMatchChisq)<10&&abs(eleP-posP)/(eleP+posP)<0.4&&posTrkD0<1.5";

  //input truth file
  TFile *fTruth = new TFile("../truth/apsignalTruthAll.root");
  //TFile *fTruth = new TFile("../mc/long/hps_aplong2_truth.root");
  TTree *ntupleT = (TTree*)fTruth->Get("ntuple");

  //input recon file
  TFile *fRecon = new TFile("../mc/disp/hps_apdisp_tri.root");
  //TFile *fRecon = new TFile("../mc/long/hps_aplong2_all.root");
  TTree *ntupleR = (TTree*)fRecon->Get("ntuple");

  //make output file
  TFile *fout = new TFile("L1L1_0p5/outputEffL1L1.root","RECREATE");

  //aprime masses
  const int nmass = 18;
  double mass[nmass] = {15,16,17,18,19,20,22,24,26,28,30,35,40,50,60,70,80,90};
  double massD[nmass] = {0.015,0.016,0.017,0.018,0.019,0.020,0.022,0.024,0.026,0.028,0.030,0.035,0.040,0.050,0.060,0.070,0.080,0.090};

  TH1F *h_gen[nmass];
  TH1F *h_rec[nmass];
  TH1F *h_eff[nmass];
  const int nbins=50;
  TF1 *fn[nmass];
  const int npar = 4;
  double parameter[npar][nmass];
  double parameterErr[npar][nmass];
  
  gROOT->SetBatch(true);
  
  TCanvas *canvas = new TCanvas("canvas"," highZ Plots", 700, 700);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(0);
  canvas->SetFrameFillColor(0);
  canvas->SetFrameBorderMode(0);
  std::string pdf_file_name = "L1L1_0p5/vertexEffFitsL1L1.pdf";
  canvas->Update();
  double effAtTarget[nmass];
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
    fn[ii] = new TF1(Form("fn[%d]",ii),"exp(pol3(0))",-5,100);
    h_eff[ii]->Sumw2();
    h_eff[ii]->Divide(h_gen[ii]);
    h_eff[ii]->Fit(fn[ii],"QL");
    h_eff[ii]->Fit(fn[ii],"QLN");
    h_eff[ii]->Fit(fn[ii],"QIM");
    //make sure it's scaled to 1 at the target
    effAtTarget[ii] = fn[ii]->Eval(-5);
    fn[ii]->SetParameter(0, fn[ii]->GetParameter(0)-TMath::Log(effAtTarget[ii]));
    h_eff[ii]->Scale(1./effAtTarget[ii]);
    h_eff[ii]->Fit(fn[ii],"QL");
    h_eff[ii]->Fit(fn[ii],"QLN");
    h_eff[ii]->Fit(fn[ii],"QIM");
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
    cc[kk]->SaveAs(Form("L1L1_0p5/Par%d.C",kk));
    cc[kk]->Close();
  
  }

  for (int jj=0;jj<nmass;jj++){
    cout<<effAtTarget[jj]<<",";
  }
  
  fout->Write();
  fout->Close();
  
  return 1;
}
