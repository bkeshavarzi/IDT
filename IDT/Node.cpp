//
//  Node.cpp
//  IDT
//
//  Created by Behrooz Keshavarzi on 11/8/20.
//  Copyright © 2020 NCSU. All rights reserved.
//

#include <stdio.h>
#include "Node.h"

Node::Node()
{
    id=0;
    x=0;
    y=0;
    rx=false;
    ry=false;
    rt=false;
}
Node::Node(int i,double * c_ptr,bool * r_ptr)
{
    id=i;
    x=*c_ptr;
    y=*(c_ptr+1);
    rx=*(r_ptr);
    ry=*(r_ptr+1);
    rt=*(r_ptr+2);
}
int Node::GetId()
{
    return id;
}
void Node::GetCord(double * c_ptr)
{
    *(c_ptr)=x;
    *(c_ptr+1)=y;
}
void Node::SetU(double * u_ptr)
{
    ux=*(u_ptr);
    uy=*(u_ptr+1);
    ut=*(u_ptr+2);
}
void Node::GetU(double * u_ptr)
{
    *(u_ptr)=ux;
    *(u_ptr+1)=uy;
    *(u_ptr+2)=ut;
}
