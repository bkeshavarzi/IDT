//
//  Viscoelastic_Time.cpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/9/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#include "Viscoelastic_Time.hpp"
Viscoelastic_Time::Viscoelastic_Time()
{
    Ej.push_back(0);
    Rho.push_back(0);
    aT[0]=1e-03;aT[1]=-3e-4;aT[2]=1e-3;
    v=0.3;
}
Viscoelastic_Time::Viscoelastic_Time(vector <double> E,vector <double> R,double * a,double vv)
{
    Ej=E;
    Rho=R;
    aT[0]=*a;aT[1]=*(a+1);aT[2]=*(a+2);
    v=vv;
    n=Rho.size();
}
double Viscoelastic_Time::GetEt(double time,double temperature)
{
    double r=Ej[0];
    double shift_factor=pow(10,aT[0]*pow(temperature,2)+aT[1]*temperature+aT[2]);
    for (int i=0;i<n;i++)
    {
        r+=Ej[i+1]*exp(-1*time*shift_factor/Rho[i]);
    }
    return r;
}
