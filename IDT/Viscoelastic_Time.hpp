//
//  Viscoelastic_Time.hpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/9/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#ifndef Viscoelastic_Time_hpp
#define Viscoelastic_Time_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Viscoelastic_Time {
public:
    Viscoelastic_Time();
    Viscoelastic_Time(vector <double>,vector <double>,double *,double);
    double GetEt(double,double);
private:
    vector <double> Ej;
    vector <double> Rho;
    int n;
    double aT[3];
    double v;
};
#endif /* Viscoelastic_Time_hpp */
