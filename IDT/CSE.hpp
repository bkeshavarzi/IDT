//
//  CSE.hpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/9/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#ifndef CSE_hpp
#define CSE_hpp
#include <iostream>
#include <Eigen/Dense>
#include "Node.h"
#include <stdio.h>
#include "Viscoelastic_Time.hpp"

using namespace std;
using namespace Eigen;

class CSE {
public:
    CSE();
    CSE(Node *,Viscoelastic_Time,bool);
    Matrix3d MakeCMatrix();
    Matrix3d MakeDMatrix();
    Matrix3d MakeKMatrix();
    void MakeDispVector(double *);
    void MakeStrainMatrix(double *);
    void MakeStressMatrix(double *);
    void MakePStrainMatrix(double *);
    void MakePStressMatrix(double *);
    void UpdateDamage(double *,double *);
private:
    Node obj[3];
    bool is_damaged;
    double xc[3],yc[3],U[6],strain[3],stress[3],pstrain[3],pstress[3],c,s=1;
    Matrix3d Cm;
    Matrix3d B;
    Matrix3d K;
    Matrix3d D;
};
#endif /* CSE_hpp */
