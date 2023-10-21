//
//  main.cpp
//  C++ Online Coffee Shop
//
//  Created by krish on 2018-07-24.
//  Copyright © 2018 krish. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string chocolate = "Chocolate";
    string gummyBears = "Gummy_Bears";
    string lollypop= "Lollypop";
    string gum= "Gum";
    string slushie = "Slushie";
    string vanillaChocolate = "Vanilla_Chocolate ";
    string caramelChocolate = "Caramel_Chocolate";
    string cupcake = "Cupcake";
    string cake = "Cake";
    int x;
    string selection;
    double price1 = 0.99;
    double price2 = 1.99;
    double price3 = 2.99;
    double price4 = 2.99;
    double price5 = 4.99;
    double price6 = 1.99;
    double price7 = 1.99;
    double price8 = 5.99;
    double price9 = 12.99;
    double total=0;
    string orderfinal;
    
    
    
        
        
        
    cout << "**********************************" << endl;
    cout << "Welcome to La Sugar Shoppe" << endl;
    cout << "123 Sugar St LA" << endl;
    cout << "**********************************" << endl;
    while (int x = 1||2)
    {
   
    cout << "                                    " << endl;
    cout << "                                    " << endl;
    cout << "                                    " << endl;
    
  
    cout << "Menu...............1" << endl;
    cout << "About Us...........2" << endl;
    cout << "Exit...............3" << endl;
    cin >> x;
    
    if (x==1)
    {
       
        
        cout << "Select as many dishes as you want (type no to stop ordering):" << endl;
        cout << "                                       " << endl;
        cout << chocolate<<"................................................"<<price1<< endl;
        cout << gummyBears<<".............................................."<<price2<< endl;
        cout << lollypop<<"................................................."<<price3<< endl;
        cout << gum<<"......................................................"<<price4<< endl;
        cout << slushie<<".................................................."<<price5<< endl;
        cout <<vanillaChocolate<<"........................................"<<price6<< endl;
        cout <<caramelChocolate<<"........................................"<<price7<< endl;
        cout <<cupcake<<".................................................."<<price8<< endl;
        cout <<cake<<"....................................................."<<price9<< endl;
   
        
       while (selection != "no")
       {
           cin >> selection;
           
           
           if (selection == chocolate)
        {
           
            total=total+price1;
            orderfinal=orderfinal+chocolate+", ";
            cout <<"Your total is $"<<total<< endl;
            cout<<"Next purchase"<< endl;
           
        }
          else if (selection == gummyBears)
           {
               
               total=total+price2;
               orderfinal=orderfinal+gummyBears+", ";
                cout <<"Your total is $"<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
           else if (selection == lollypop)
           {
               
               total=total+price3;
               orderfinal=orderfinal+lollypop+", ";
               cout <<"Your total is $"<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
           else if (selection == gum)
           {
               
               total=total+price4;
               orderfinal=orderfinal+gum+", ";
               cout <<"Your total is $"<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
           else if (selection == slushie)
           {
               
               total=total+price5;
               orderfinal=orderfinal+slushie+", ";
               cout <<"Your total is $"<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
           else if (selection == vanillaChocolate)
           {
               
               total=total+price6;
               orderfinal=orderfinal+vanillaChocolate+", ";
               cout <<"Your total is $"<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
           else if (selection == caramelChocolate)
           {
               
               total=total+price7;
               orderfinal=orderfinal+caramelChocolate+", ";
               cout <<"Your total is $"<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
        
           else if (selection == cupcake)
           {
               
               total=total+price8;
               orderfinal=orderfinal+cupcake+", ";
               cout <<"Your total is "<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
       
           else if (selection == cake)
           {
               
               total=total+price9;
               orderfinal=orderfinal+cake+", ";
               cout <<"Your total is "<<total<< endl;
               cout<<"Next purchase"<< endl;
               
           }
       
       
       else if (selection == "no")
       {
           cout <<"                      "<<endl;
           
           cout <<"You have ordered: "<<orderfinal<<"with a total of "<<total<<endl;
           cout <<"Have a Good Day and we hope you will come back to La Sugar Shoppe"<<endl;
           
       }
       
       
       
            
            
        else
        {
            cout <<"Please type in a valid item"<<endl;
        
            
            
        }
        
            
        
    
       }
    
    
    
    }
    
   
    
    
    
    
    
    
    if (x==2)
    {
        cout <<"                         "<<endl;
        cout << "We only use the best cocca beans to make delicious chocolate for you.  These cocca beans are then prepared and made into chocolate by our world famous chefs. Founded in 1950 by Jeff Sug, La Sugar Shoppe is one of the oldest and finest handmade chocolate stores in the world. If you have any questions or concerns please feel free to ask us.  We hope we make your La Sugar Shoppe experience delicous." << endl;
        
        
        
    }
    if (x==3)
    {
        return 0;
        
    }
    
    
    }
    

    

   
    
    




}
