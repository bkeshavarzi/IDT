//
//  Elastic.cpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/8/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#include "Elastic.hpp"
Elastic::Elastic()
{
    E=0.0;
    v=0.0;
}
Elastic::Elastic(double Ev,double vv)
{
    E=Ev;
    v=vv;
}
void Elastic::GetParam(double * ptr)
{
    *(ptr)=E;
    *(ptr+1)=v;
}
