//
//  Node.h
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/8/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#ifndef Node_h
#define Node_h
#include <iostream>
using namespace std;

class Node {
public:
    Node();
    Node(int,double *,bool *);
    int GetId();
    void GetCord(double *);
    void SetU(double *);
    void GetU(double *);
    
private:
    int id;
    double x,y;
    bool rx,ry,rt;
    double ux,uy,ut;
};

#endif /* Node_h */
