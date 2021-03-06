TF1* DoubleJet_L1 = new TF1("DoubleJet_L1","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-252.012)/78.0111)*(x>252.012))+(((x-252.012)/(78.0111-16.3556))*(x<=252.012)))*0.999223))))-5.55112e-17)");
TF1* DoubleJet_L1Up = new TF1("DoubleJet_L1Up","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-252.016)/78.0111)*(x>252.016))+(((x-252.016)/(78.0111-16.3556))*(x<=252.016)))*0.999223))))+0.02)");
TF1* DoubleJet_L1Down = new TF1("DoubleJet_L1Down","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-252.016)/78.0111)*(x>252.016))+(((x-252.016)/(78.0111-16.3556))*(x<=252.016)))*0.999223))))-0.02)");
TF1* DoubleJet_CaloPt4 = new TF1("DoubleJet_CaloPt4","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-15.7817)/19.658)*(x>15.7817))+(((x-15.7817)/(19.658-9.42453))*(x<=15.7817)))*2))))-0.505381)");
TF1* DoubleJet_CaloPt4Up = new TF1("DoubleJet_CaloPt4Up","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-15.6588)/19.658)*(x>15.6588))+(((x-15.6588)/(19.658-9.42453))*(x<=15.6588)))*2))))-0.485381)");
TF1* DoubleJet_CaloPt4Down = new TF1("DoubleJet_CaloPt4Down","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-15.9058)/19.658)*(x>15.9058))+(((x-15.9058)/(19.658-9.42453))*(x<=15.9058)))*2))))-0.525381)");
TF1* DoubleJet_CaloPt2 = new TF1("DoubleJet_CaloPt2","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-87.0299)/21.5934)*(x>87.0299))+(((x-87.0299)/(21.5934-4.74652))*(x<=87.0299)))*0.98381))))-6.42819e-14)");
TF1* DoubleJet_CaloPt2Up = new TF1("DoubleJet_CaloPt2Up","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-86.9147)/21.5934)*(x>86.9147))+(((x-86.9147)/(21.5934-4.74652))*(x<=86.9147)))*0.98381))))+0.02)");
TF1* DoubleJet_CaloPt2Down = new TF1("DoubleJet_CaloPt2Down","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-87.2235)/21.5934)*(x>87.2235))+(((x-87.2235)/(21.5934-4.74652))*(x<=87.2235)))*0.98381))))-0.02)");
TF1* DoubleJet_CSV3 = new TF1("DoubleJet_CSV3","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x+1.07414)/1.6331)*(x>-1.07414))+(((x+1.07414)/(1.6331-0.78294))*(x<=-1.07414)))*2))))-0.630783)");
TF1* DoubleJet_CSV3Up = new TF1("DoubleJet_CSV3Up","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x+1.19303)/1.6331)*(x>-1.19303))+(((x+1.19303)/(1.6331-0.78294))*(x<=-1.19303)))*2))))-0.608465)");
TF1* DoubleJet_CSV3Down = new TF1("DoubleJet_CSV3Down","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x+0.953561)/1.6331)*(x>-0.953561))+(((x+0.953561)/(1.6331-0.78294))*(x<=-0.953561)))*2))))-0.652227)");
TF1* DoubleJet_PFPt4 = new TF1("DoubleJet_PFPt4","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-15.1921)/15.0589)*(x>15.1921))+(((x-15.1921)/(15.0589-7.21964))*(x<=15.1921)))*0.996857))))-0)");
TF1* DoubleJet_PFPt4Up = new TF1("DoubleJet_PFPt4Up","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-14.6683)/15.0589)*(x>14.6683))+(((x-14.6683)/(15.0589-7.21964))*(x<=14.6683)))*0.996857))))+0.02)");
TF1* DoubleJet_PFPt4Down = new TF1("DoubleJet_PFPt4Down","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-15.7214)/15.0589)*(x>15.7214))+(((x-15.7214)/(15.0589-7.21964))*(x<=15.7214)))*0.996857))))-0.02)");
TF1* DoubleJet_PFPt2 = new TF1("DoubleJet_PFPt2","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-85.3329)/15.1374)*(x>85.3329))+(((x-85.3329)/(15.1374+16.7961))*(x<=85.3329)))*0.995228))))-0)");
TF1* DoubleJet_PFPt2Up = new TF1("DoubleJet_PFPt2Up","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-85.068)/15.1374)*(x>85.068))+(((x-85.068)/(15.1374+16.7961))*(x<=85.068)))*0.995228))))+0.02)");
TF1* DoubleJet_PFPt2Down = new TF1("DoubleJet_PFPt2Down","min(1.,(1-(0.5-(0.5*(TMath::Erf((((x-85.599)/15.1374)*(x>85.599))+(((x-85.599)/(15.1374+16.7961))*(x<=85.599)))*0.995228))))-0.02)");
