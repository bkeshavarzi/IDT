//
//  Damage.cpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/9/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#include "Damage.hpp"
Damage::Damage(double * ptr)
{
    c11=*ptr;
    c12=*(ptr+1);
    af=*(ptr+2);
    bf=*(ptr+3);
}
