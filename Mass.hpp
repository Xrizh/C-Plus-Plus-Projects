//
//  Mass.hpp
//  C++
//
//  Created by krish on 2018-08-25.
//  Copyright © 2018 krish. All rights reserved.
//

#ifndef Mass_hpp
#define Mass_hpp

#include <iostream>
class Mass
{
public:
    
    //Calculates millagram to gram
    double mgtog(double mgg);
    //Calculates gram to killagram
    double gtokg(double gkg);
    //Calculates killagram to tonne
    double kgtot(double kgt);
    //Calculates kg to pound
    double kgtopd(double kgpd);
    //Calculates pound to kg
    double pdtokg(double pdkg);
    //Calculates ounce to kg;
    double ouncetokg(double ouncekg);
    //Calculates kg to ounce;
    double kgtoounce(double kgounce);
   
    
};
#endif /* Mass_hpp */
