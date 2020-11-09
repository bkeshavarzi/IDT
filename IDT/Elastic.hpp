//
//  Elastic.hpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/8/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#ifndef Elastic_hpp
#define Elastic_hpp
#include <iostream>
using namespace std;

#include <stdio.h>

class Elastic {
public:
    Elastic();
    Elastic(double,double);
    void GetParam(double *);
private:
    double E,v;
};
#endif /* Elastic_hpp */
