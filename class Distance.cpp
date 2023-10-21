//
//  class Distance.cpp
//  C++
//
//  Created by krish on 2018-08-16.
//  Copyright © 2018 krish. All rights reserved.
//

#include "class Distance.hpp"
#include <iostream>
#include <string>

double Dis::mmtocm(double mc)
{
    double ans;
    ans = mc / 10;
    return ans;
}
double Dis::cmtoin(double ci)
{
    double ans;
    ans = ci*0.39;
    return ans;
}
double Dis::cmtom(double cm)
{
    double ans;
    ans = cm/100;
    return ans;
}
double Dis::mtoft(double mf)
{
    double ans;
    ans = mf * 3.28;
    return ans;
}
double Dis::mtoyd(double my)
{
    double ans;
    ans = my * 0.914;
    return ans;
}
double Dis::mtokm(double mk)
{
    double ans;
    ans = mk /1000;
    return ans;
}
double Dis::kmtom(double km)
{
    double ans;
    ans = km *1000;
    return ans;
}











