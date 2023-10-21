//
//  main.cpp
//  C++
//
//  Created by krish on 2018-07-19.
//  Copyright © 2018 krish. All rights reserved.
//

// Example program

#include <iostream>
#include <string>
#include "Temp.hpp"
#include "class Distance.hpp"
#include "Mass.hpp"

using namespace std;



void printAns (double fans)
{
    cout << "And your answer is..." << endl;
    cout <<fans<< endl;
    
}
void printAmount (double amount)
{
    
    cout <<"Type in the amount of numbers you would like to use"<<endl;
    
}
double pow (double a, double b)
{
    double ans=a;
    for (int i=1;i<b;i++)
    {
        
        ans = ans*a;
    }
    
    return ans;
}



int floor (int a)
{
    
    
    
    
    return 1;
}

double Remainder (int a, int b)
{
    
    
    return a%b;
}








int main()
{
    
    
    
    string operation;
    double useri, usernum;
    
    int close = 1;
    int open;
    double ans;
    
    
    cout << "Welcome to The Calculator that knows all" << endl;
    while (close==1)
    {
        cout <<"Temp = 1, Distance = 2, Math = 3, Mass = 4, Exit = 5"<<endl;
        cin >>open;
        
        if (open ==1)
        {
            int choice;
            double num;
            cout <<"Do you want to calculate Celsius to Fahrenheit (1) or Fahrenheit to Celsius (2)"<<endl;
            cin >> choice;
            
            if (choice ==1)
            {
                cout <<"Type in your Celsius number"<<endl;
                cin >>num;
                Temp cfobj;
                cout <<"And your answer is...(°F)"<<endl;
                cout <<cfobj.celToFah(num)<<endl;
            }
            else if (choice ==2)
            {
                cout <<"Type in your Fahrenheit number"<<endl;
                cin >>num;
                Temp fcobj;
                cout <<"And your answer is...(°C)"<<endl;
                cout <<fcobj.fahToCel(num)<<endl;
            
            }
            
            
            
        }
        
        else if (open == 2)
        {
            int choice;
            double num;
            cout <<"What do you want to calculate"<<endl;
            cout <<"           "<<endl;
            cout <<"mm to cm = 1"<<endl;
            cout <<"cm to in = 2"<<endl;
            cout <<"cm to m = 3"<<endl;
            cout <<"m to ft = 4"<<endl;
            cout <<"m to yd = 5"<<endl;
            cout <<"m to km = 6"<<endl;
            cout <<"km to m = 7"<<endl;
            cin >> choice;
            
            if (choice == 1)
            {
                cout <<"Chose your number"<<endl;
                cin >>num;
                Dis dobj;
                cout <<"And your answer is...(cm)"<<endl;
                cout <<dobj.mmtocm(num)<<endl;
                num = 0;
                
            }
            if (choice == 2)
            {
                cout <<"Chose your number"<<endl;
                cin >>num;
                Dis dobj;
                cout <<"And your answer is...(in)"<<endl;
                cout <<dobj.cmtoin(num)<<endl;
                num = 0;
            }
            if (choice == 3)
            {
                cout <<"Chose your number"<<endl;
                cin >>num;
                Dis dobj;
                cout <<"And your answer is...(m)"<<endl;
                cout <<dobj.cmtom(num)<<endl;
                num = 0;
            }
            if (choice == 4)
            {
                cout <<"Chose your number"<<endl;
                cin >>num;
                Dis dobj;
                cout <<"And your answer is...(ft)"<<endl;
                cout <<dobj.mtoft(num)<<endl;
                num = 0;
            }
            if (choice == 5)
            {
                cout <<"Chose your number"<<endl;
                cin >>num;
                Dis dobj;
                cout <<"And your answer is...(yd)"<<endl;
                cout <<dobj.mtoyd(num)<<endl;
                num = 0;
            }
            if (choice == 6)
            {
                cout <<"Chose your number"<<endl;
                cin >>num;
                Dis dobj;
                cout <<"And your answer is...(km)"<<endl;
                cout <<dobj.mtokm(num)<<endl;
                num = 0;
            }
            if (choice == 7)
            {
                cout <<"Chose your number"<<endl;
                cin >>num;
                Dis dobj;
                cout <<"And your answer is...(m)"<<endl;
                cout <<dobj.kmtom(num)<<endl;
                num = 0;
            }

           

        }
        
      
        
        else if (open ==3)
        {
            cout << "What operation would you like to use (add (add), sub (subtract), mul (multiply), div (division), pow (raise to the power to), floor (round down) and rem (integer remainder for subtraction)" << endl;
        
        cout <<"                   "<<endl;
        cin >> operation;
        
        
        
        
        
        if (operation == "add"||operation =="Add")
        {
          
            printAmoun;
            cin >> useri;
            cout <<"Enter the numbers"<<endl;
            
            for (int i=0;useri>i;i++)
            {
                
                cin>>usernum;
                ans = usernum;
                
            }
            
            
            printAns(ans);
        }
        
        else if (operation == "sub"||operation =="Sub"||operation =="Subtract"||operation =="subtract")
        {
            
            double ans=1;
            double fans;
            printAmount(useri);
            cin >> useri;
            cout <<"Enter the numbers"<<endl;
            
            
            
            for (int i=0;useri>i;i++)
            {
                
                if (i==1)
                {
                    ans = 1;
                    
                }
                cin>>usernum;
                ans = ans-usernum;
                fans=ans;
                
            }
            
            printAns;
            ans=0;
            fans=0;
        }
        
        else if (operation == "mul"||operation =="Mul"||operation =="Multiply"||operation =="multiply")
        {
            
            
            double ans=1;
            
            
            printAmount(useri);
            cin >> useri;
            cout <<"Enter the numbers"<<endl;
            
            
            for (int i=0;i<useri;i++)
            {
                
                cin>>usernum;
                ans = ans*usernum;
                
            }
            
            
            
            printAns(ans);
            ans=0;
        }
        
        else if (operation == "div"||operation =="Div"||operation =="Divide"||operation =="divide")
        {
            double ans=1;
            double fans;
            printAmount(useri);
            cin >> useri;
            cout <<"Enter the numbers"<<endl;
            
            
            
            for (int i=0;i<useri;i++)
            {
                if (i==1)
                    
                {

                }
                cin>>usernum;
                ans = ans/usernum;
                fans=ans;
            }
            
            
            
            printAns(ans);
            ans=0;
            fans=0;
        }
        
        
        
        else if (operation == "pow")
        {
            double a, b;
            
            
            cout <<"Enter Your Base"<<endl;
            cin >> a;
            cout <<"Enter Your Power"<<endl;
            cin >> b;
            
            double ans=a;
            for (double i=1;i<b;i++)
            {
                
                ans = ans*a;
            }
            
            
            
            
            printAns(ans);
            ans =0;
            
        }
        
        else if (operation == "floor")
        {
            int t;
            
            cout <<"Enter a number"<<endl;
            cin >> t;
            
            cout << "And your answer is..." << endl;
            cout <<t<< endl;
            t=0;
            
            
            
            
            
        }
        
        
        else if (operation == "rem")
        {
            int d, e, ans;
            cout <<"Enter your first number"<<endl;
            
            cin>>d;
            cout <<"Enter a second number"<<endl;
            
            cin>>e;
            ans = d%e;
            printAns(ans);
            ans= 0;
        }
        
        
        
        
        
        else
        {
            cout << "Please Type a correct operation"<< endl;
            cout << "Goodbye now" << endl;
            
            
        }
        
      
        
        
        
    }
    
    
    else if (open==4)
    {
        int choice;
        double num;
        
        
        cout <<"What do you want to calculate"<<endl;
        cout <<"              "<<endl;
        cout <<"mg to g = 1"<<endl;
        cout <<"g to kg = 2"<<endl;
        cout <<"kg to t = 3"<<endl;
        cout <<"kg to pd = 4"<<endl;
        cout <<"pd to kg = 5"<<endl;
        cout <<"kg to ounce = 6"<<endl;
        cout <<"ounce to kg = 7"<<endl;
        cin >> choice;
        
        if (choice == 1)
        {
            cout <<"Chose your number"<<endl;
            cin >>num;
            Mass mobj;
            cout <<"And your answer is...(g)"<<endl;
            cout <<mobj.mgtog(num)<<endl;
            num = 0;
            
        }
        if (choice == 2)
        {
            cout <<"Chose your number"<<endl;
            cin >>num;
            Mass mobj;
            cout <<"And your answer is...(kg)"<<endl;
            cout <<mobj.gtokg(num)<<endl;
            num = 0;
        }
        if (choice == 3)
        {
            cout <<"Chose your number"<<endl;
            cin >>num;
            Mass mobj;
            cout <<"And your answer is...(tonne)"<<endl;
            cout <<mobj.kgtot(num)<<endl;
            num = 0;
        }
        if (choice == 4)
        {
            cout <<"Chose your number"<<endl;
            cin >>num;
            Mass mobj;
            cout <<"And your answer is...(pound)"<<endl;
            cout <<mobj.kgtopd(num)<<endl;
            num = 0;
        }
        if (choice == 5)
        {
            cout <<"Chose your number"<<endl;
            cin >>num;
             Mass mobj;
            cout <<"And your answer is...(kg)"<<endl;
            cout <<mobj.pdtokg(num)<<endl;
            num = 0;
        }
        if (choice == 6)
        {
            cout <<"Chose your number"<<endl;
            cin >>num;
            Mass mobj;
            cout <<"And your answer is...(ounce)"<<endl;
            cout <<mobj.kgtoounce(num)<<endl;
            num = 0;
        }
        if (choice == 7)
        {
            cout <<"Chose your number"<<endl;
            cin >>num;
            Mass mobj;
            cout <<"And your answer is...(kg)"<<endl;
            cout <<mobj.ouncetokg(num)<<endl;
            num = 0;
        }
        
    
    
    
    }
        else if (open == 5)
        {
            return 0;
        }
        
        
    
    
    
    
    
    
    
    
    }
        return 0;
    
    
    
    
}



















