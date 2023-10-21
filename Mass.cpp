//
//  Mass.cpp
//  C++
//
//  Created by krish on 2018-08-25.
//  Copyright © 2018 krish. All rights reserved.
//

#include "Mass.hpp"
#include <iostream>
#include <string>

double Mass::mgtog(double mgg)
{
    double ans;
    ans = mgg / 1000;
    return ans;
}
double Mass::gtokg(double gkg)
{
    double ans;
    ans = gkg/1000;
    return ans;
}
double Mass::kgtot(double kgt)
{
    double ans;
    ans = kgt/1000;
    return ans;
}
double Mass::kgtopd(double kgpd)
{
    double ans;
    ans = kgpd * 2.2046;
    return ans;
}
double Mass::pdtokg(double pdkg)
{
    double ans;
    ans = pdkg / 2.2046;
    return ans;
}
double Mass::ouncetokg(double ouncekg)
{
    double ans;
    ans = ouncekg /35.274;
    return ans;
}
double Mass::kgtoounce(double kgounce)
{
    double ans;
    ans = kgounce * 35.274;
    return ans;
}
