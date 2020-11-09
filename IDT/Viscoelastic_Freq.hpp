//
//  Viscoelastic_Freq.hpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/9/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#ifndef Viscoelastic_Freq_hpp
#define Viscoelastic_Freq_hpp
#include <iostream>
#include <complex>
using namespace std;

#include <stdio.h>
class Viscoelastic_Freq {
public:
    Viscoelastic_Freq();
    Viscoelastic_Freq(double *,double *,double);
    complex <double> GetE_w(double,double);
private:
    double v;
    double aT[3];
    double E0,Einf,delta,tau0,k,h,beta;
    complex <double> Get2S2P1D(double,double);
};
#endif /* Viscoelastic_Freq_hpp */
