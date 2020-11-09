//
//  Damage.hpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/9/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#ifndef Damage_hpp
#define Damage_hpp
#include <iostream>
#include <stdio.h>

using namespace std;

class Damage
{
public:
    Damage(double *);
private:
    double c11,c12,af,bf;
};

#endif /* Damage_hpp */
