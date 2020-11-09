//
//  Viscoelastic_Freq.cpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/9/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#include "Viscoelastic_Freq.hpp"
Viscoelastic_Freq::Viscoelastic_Freq()
{
    E0=0;
    Einf=0;
    delta=0;
    tau0=0;
    k=0;
    h=0;
    beta=0;
    v=0.3;
}
Viscoelastic_Freq::Viscoelastic_Freq(double * param,double * a,double vv)
{
    E0=*param;
    Einf=*(param+1);
    delta=*(param+2);
    tau0=*(param+3);
    k=*(param+4);
    h=*(param+5);
    beta=*(param+6);
    aT[0]=*a;
    aT[1]=*(a+1);
    aT[2]=*(a+2);
    v=vv;
}
complex <double> Viscoelastic_Freq::GetE_w(double w,double temperature)
{
    complex <double> Es=Get2S2P1D(w,temperature);
    return Es;
}
complex <double> Viscoelastic_Freq::Get2S2P1D(double w,double temperature)
{
    complex<double> Estar;
    complex<double> i=(0,1);
    double w_red=w*pow(10,aT[0]*pow(temperature,2)+aT[1]*temperature+aT[2]);
    complex<double> term1=delta*pow(i*w_red*tau0,-1*k);
    complex<double> term2=pow(i*w_red*tau0,-1*h);
    complex<double> term3=pow(i*w_red*tau0*beta,-1);
    complex<double> term4=(1,0);
    Estar=static_cast <complex <double>>(E0)+(static_cast <complex <double>>((Einf-E0))/(term4+term1+term2+term3));
    return Estar;
}
