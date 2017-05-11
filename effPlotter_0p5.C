

const double zMax = 100;

//for the L1L1 dataset
double vertEffL1L1(double gct, double zz, double mA){
  mA = mA/1000;
   return 1./gct*exp((-5-zz)/gct)*exp(
				      (-0.2359+3.606*mA)
				      +(-0.03537+0.5395*mA)*zz
				      +(-0.001201+0.1404*mA-2.614*pow(mA,2)+10.65*pow(mA,3))*pow(zz,2)
				      +(-0.0002078+0.008753*mA-0.1396*pow(mA,2)+0.8077*pow(mA,3))*pow(zz,3)
				   
				      );
    }


/////////////////////////////////////////////////////
// Crystal ball peak function
Double_t CrystalBall(double z, double mass) {
 
  
  double par0 = 0.97;
  double par1 = 141.5;
  double par2 = -58.8891+5208.95*mass-76469.9*pow(mass,2)+386631*pow(mass,3);
  double par3 = 3.05375+629.994*mass-14691.8*pow(mass,2)+114123*pow(mass,3);
  double par4 = -0.3125+37.0172*mass-472.052*pow(mass,2);
    
  Double_t sigma = par3;
  if (par3<0){sigma = -par3;}
  Double_t t = (z-par2)/sigma;
  if (par0 < 0) t = -t;
  Double_t absAlpha = fabs(par0);
  if (t >= -absAlpha) {
    return par4*exp(-0.5*t*t);
  }
  else {
    Double_t a =  TMath::Power(par1/absAlpha,par1)*exp(-0.5*absAlpha*absAlpha);
    Double_t b= par1/absAlpha - absAlpha; 

    return par4*(a/TMath::Power(b - t, par1));
  }
}


double vertEffL1L2(double gct, double zz, double mA){
  mA = mA/1000; 
  
  return 1./gct*exp((-5-zz)/gct)*CrystalBall(zz,mA);
  
}



//for the L2L2 dataset
double vertEffL2L2(double gct, double zz, double mA){
  mA = mA/1000;
  return 1./gct*exp((-5-zz)/gct)*(
				  (-0.3623+30.88*mA-374.7*mA*mA)*
				  exp(-0.5*pow( ( zz-(-71.76+7733.51*mA-131569*mA*mA+827080*mA*mA*mA))/(-4.058-813*mA-8947*mA*mA),2))
				  );
}





double integrateZ0(double gct, double mA, double zCut){
  double step = 0.05;
  double integral = 0;
  for (double iz=zCut; iz<=zMax; iz+=step){
    integral += (step/6)*(vertEffL1L1(gct,iz,mA)+4*vertEffL1L1(gct,(2*iz+step)/2,mA)+vertEffL1L1(gct,iz+step,mA));
  }
  return integral;
}

double integrateZ1(double gct, double mA, double zCut){
  double step = 0.05;
  double integral = 0;
  for (double iz=zCut; iz<=zMax; iz+=step){
    integral += (step/6)*(vertEffL1L2(gct,iz,mA)+4*vertEffL1L2(gct,(2*iz+step)/2,mA)+vertEffL1L2(gct,iz+step,mA));
  }
 
  return integral;
}
double integrateZ2(double gct, double mA, double zCut){
  double step = 0.05;
  double integral = 0;
  for (double iz=zCut; iz<=zMax; iz+=step){
    integral += (step/6)*(vertEffL2L2(gct,iz,mA)+4*vertEffL2L2(gct,(2*iz+step)/2,mA)+vertEffL2L2(gct,iz+step,mA));
  }
  return integral;
}
//E0 [GeV], mA [MeV]
//returns [mm]
double gct(double E0, double eps2, double mA){
  return 8*(E0/10)*(pow(0.0001,2)/eps2)*pow(100/mA,2);
}



int effPlotter_0p5(){
  //read in L1L1
  TFile *f1 = new TFile("L1L1_0p5/outputEffL1L1.root");

  //read in L1L2
  TFile *f2 = new TFile("L1L2_0p5/outputEffL1L1.root");

  //read in L2L2
  TFile *f3 = new TFile("L2L2_0p5/outputEffL1L1.root");

  //Make output file
  TCanvas *canvas = new TCanvas("canvas"," highZ Plots", 700, 700);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(0);
  canvas->SetFrameFillColor(0);
  canvas->SetFrameBorderMode(0);
  canvas->SetRightMargin(0.9);
  std::string pdf_file_name = "vertexFitsCombined_0p5.pdf";
  

  gROOT->SetBatch(true);
  canvas->Update();

  //plot the efficiency at each mass
  const int nmass = 18;
  double mass[nmass] = {15,16,17,18,19,20,22,24,26,28,30,35,40,50,60,70,80,90};
  double massD[nmass] = {0.015,0.016,0.017,0.018,0.019,0.020,0.022,0.024,0.026,0.028,0.030,0.035,0.040,0.050,0.060,0.070,0.080,0.090};

  TH1F *h_l1l1[nmass];
  TH1F *h_l1l2[nmass];
  TH1F *h_l2l2[nmass];

  TH1F *h_sum[nmass];

  for (int ii=0; ii<nmass; ii++){
    h_l1l1[ii] = (TH1F*)f1->Get(Form("h_eff[%d]",ii));    
    h_l1l2[ii] = (TH1F*)f2->Get(Form("h_eff[%d]",ii));    
    h_l2l2[ii] = (TH1F*)f3->Get(Form("h_eff[%d]",ii));

    h_sum[ii] = (TH1F*)h_l1l1[ii]->Clone(Form("h_sum[%d]",ii));
    h_sum[ii]->Add(h_l1l2[ii]);
    h_sum[ii]->Add(h_l2l2[ii]);

    h_l1l1[ii]->SetLineColor(kMagenta+2);
    h_l1l1[ii]->SetLineWidth(2);
    h_l1l2[ii]->SetLineColor(kBlue);
    h_l1l2[ii]->SetLineWidth(2);
    h_l2l2[ii]->SetLineColor(kCyan+3);
    h_l2l2[ii]->SetLineWidth(2);
    TLegend *lv = new TLegend(0.45,0.55,0.85,0.85);
    lv->SetBorderSize(0);
    h_l1l1[ii]->SetStats(0);
    h_l1l2[ii]->SetStats(0);
    h_l2l2[ii]->SetStats(0);
    h_l1l1[ii]->Draw("e");
    h_l1l2[ii]->Draw("esame");
    h_l2l2[ii]->Draw("esame");
    TLegendEntry *l1 = lv->AddEntry(Form("h_l1l1[%d]",ii),"0.5mm, L1L1","");
    TLegendEntry *l2 = lv->AddEntry(Form("h_l1l2[%d]",ii),"0.5mm, L1L2","");
    TLegendEntry *l3 = lv->AddEntry(Form("h_l2l2[%d]",ii),"0.5mm, L2L2","");
    l1->SetTextColor(kMagenta+2);
    l2->SetTextColor(kBlue);
    l3->SetTextColor(kCyan+3);
    lv->Draw(); 
    h_l1l1[ii]->SetTitle(Form("0.5mm, A' mass = %.0f MeV",mass[ii]));
    canvas->Print( (pdf_file_name + "(").c_str());



  }

    //plot the efficiency vs z for all masses
  
  for (int ii=0; ii<nmass; ii++){
    if (ii==0){continue;}
    h_sum[ii]->SetStats(0);
    if (ii<11){
      h_sum[ii]->SetLineColor(kViolet+ii);
      h_sum[ii]->SetLineWidth(2);
    }
    else{
      h_sum[ii]->SetLineColor(kAzure+10-ii);
      h_sum[ii]->SetLineWidth(2);
    }
    
    if (ii==1){h_sum[ii]->Draw("histo");}
    else{h_sum[ii]->Draw("histo same");}
    h_sum[1]->GetYaxis()->SetTitle("efficiency");
    h_sum[1]->GetXaxis()->SetTitle("z vertex [mm]");    
    h_sum[1]->SetTitle("efficiency vs z vertex for different masses");

  }
  


  //plot the integral
   const int nmass2 = 90;

   //loop over eps2
  const int neps2 = 13;
  double eps2[neps2] = {7E-10, 8E-10, 9E-10, 1E-9, 2E-9, 3E-9, 4E-9, 5E-9, 6E-9, 7E-9, 8E-9, 9E-9, 1E-8};
  int eps2cheat[neps2] = {7,8,9,1,2,3,4,5,6,7,8,9,1};
  int eps2cheat2[neps2] = {10,10,10,9,9,9,9,9,9,9,9,9,8};
  double gctf[neps2][nmass2];
  const int nzpos = 115;
  int zpos[nzpos];
  for (int jj=0; jj<nzpos; jj++){
    zpos[jj] = jj-5;//mm
  }
  double mass2[nmass2];
  for (int ii=0;ii<nmass2;ii++){
    mass2[ii] = ii;
  }
  
  //store the integral values
  const int ntypes = 3;

  double integral[ntypes][nzpos][neps2][nmass2];  

  
  for(int kk=0; kk<nzpos; kk++){
    for (int ii=0; ii<nmass2; ii++){
      for (int jj=0; jj<neps2;jj++){
	gctf[jj][ii] = gct(1.056,eps2[jj],mass2[ii]);
	double zz = zpos[kk];
	integral[0][kk][jj][ii] = integrateZ0(gctf[jj][ii], mass2[ii], zz);
	integral[1][kk][jj][ii] = integrateZ1(gctf[jj][ii], mass2[ii], zz);
	integral[2][kk][jj][ii] = integrateZ2(gctf[jj][ii], mass2[ii], zz);
      }
    }
  }

  //plot mass vs z with color as integral
    TH2F *h2_mVz[ntypes];
    TH2F *h2_epsVz[ntypes];
    const char *l1l1 = "L1L1, #epsilon^{2}=5E-9; vertex z position [mm]; mass [MeV];full integral where zCut = z vertex position";
    const char *l1l2 = "L1L2, #epsilon^{2}=5E-9; vertex z position [mm]; mass [Mev];full (CB) integral where zCut = z vertex position";
    const char *l2l2 = "L2L2, #epsilon^{2}=5E-9; vertex z position [mm]; mass [MeV];full (Gaussian) integral where zCut = z vertex position";
    const char *l1l1e = "L1L1, mass=35MeV; vertex z position [mm]; #epsilon^{2};full integral where zCut = z vertex position";
    const char *l1l2e = "L1L2, mass=35MeV; vertex z position [mm]; #epsilon^{2};full (CB) integral where zCut = z vertex position";
    const char *l2l2e = "L2L2, mass=35MeV; vertex z position [mm]; #epsilon^{2};full (Gaussian approx) integral where zCut = z vertex position";
 
  for (int kk=0; kk<ntypes; kk++){
    const char *layer;
    const char *layere;
    if (kk==0){layer = l1l1;layere = l1l1e;}
    else if (kk==1) {layer=l1l2;layere = l1l2e;}
    else {layer = l2l2;layere = l2l2e;}

    h2_mVz[kk] = new TH2F(Form("h2_mVz[%d]",kk),layer,117, -5, 100,100,0,90);
    h2_epsVz[kk] = new TH2F(Form("h2_epsVz[%d]",kk),layere,117, -5, 100,200,1E-10,4E-8);
    h2_mVz[kk]->GetZaxis()->SetRangeUser(1E-5,1E0); 
    h2_epsVz[kk]->GetZaxis()->SetRangeUser(1E-5,1E0); 
  }

//mass vs z, weighted by efficiency
  for (int ik=0; ik<ntypes; ik++){
    for (int iz=0; iz<nzpos; iz++){
      int zbin = h2_mVz[ik]->GetXaxis()->FindBin(zpos[iz]);

      for (int ii=0; ii<nmass2;ii++){
	int mbin = h2_mVz[ik]->GetYaxis()->FindBin(mass2[ii]);
	h2_mVz[ik]->SetBinContent(zbin,mbin,integral[ik][iz][7][ii]);
      }
      for (int jj=0; jj<neps2;jj++){
	int ebin = h2_epsVz[ik]->GetYaxis()->FindBin(eps2[jj]);
	h2_epsVz[ik]->SetBinContent(zbin,ebin,integral[ik][iz][jj][6]);
      }
      
    }
  }
    canvas->SetLogz();

 for (int ik=0; ik<ntypes; ik++){
   h2_mVz[ik]->SetStats(0);
    h2_mVz[ik]->Draw("colz");
    h2_mVz[ik]->GetZaxis()->SetTitleOffset(1.5);
    canvas->Print( (pdf_file_name + "(").c_str());

  }
  canvas->SetLogy();

  for (int ik=0; ik<ntypes; ik++){
    h2_epsVz[ik]->SetStats(0);
    h2_epsVz[ik]->Draw("colz");
    h2_epsVz[ik]->GetZaxis()->SetTitleOffset(1.5);
    canvas->Print( (pdf_file_name + "(").c_str());

  }
    
  canvas->Print( (pdf_file_name + ")").c_str());
  return 1;
}
