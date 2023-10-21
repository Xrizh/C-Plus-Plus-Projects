//
//  Temp.cpp
//  C++
//
//  Created by krish on 2018-08-16.
//  Copyright © 2018 krish. All rights reserved.
//

#include "Temp.hpp"
#include <iostream>
#include <string>

double Temp::celToFah(double C)
{
    double ans;
    ans = (C*1.8)+32;
    return ans;
}
double Temp::fahToCel(double F)
{
    double ans;
    ans = (F-32)/1.8;
    return ans;
}
