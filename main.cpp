//
//  main.cpp
//  C++ Project 2
//
//  Created by krish on 2018-08-02.
//  Copyright © 2018 krish. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



int main()
{
    string player1;
    string player2;
    string player1in;
    string player2in;
    string TL="TL";
    string TC="TC";
    string TR="TR";
    string ML="ML";
    string MC="MC";
    string MR="MR";
    string BL="BL";
    string BC="BC";
    string BR="BR";
    
    int choice;
    string placement;
    
    
    cout <<"Do you want to play Tic Tac Toe"<<endl;
    cout <<"Type in 1 to play"<<endl;
    cin>>choice;
    
    
    while (choice==1)
    {
        
      
        
        cout <<"       |     |      "<<endl;
        cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
        cout <<"  _____|_____|_____   "<<endl;
        cout <<"       |     |        "<<endl;
        cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
        cout <<"  _____|_____|_____   "<<endl;
        cout <<"       |     |        "<<endl;
        cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
        cout <<"       |     |      "<<endl;
        
        cout <<"Player 1 = X"<<endl;
        cout <<"Player 2 = O"<<endl;
       
        cout <<"Player 1's Turn"<<endl;
        cin>>placement;
    
        
        
        
        
        if (placement==TL)
        {
            TL=" X";
          
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
        }
        else if (placement==TC)
        {
            TC=" X";
           
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
        }
    
        else if (placement==TR)
        {
            TR=" X";
           
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
        }
        
        else if (placement==ML)
        {
            ML=" X";
            
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
        }
    
        else if (placement==MC)
        {
            MC=" X";
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
        }
    
        else if (placement==MR)
        {
            MR=" X";
           
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
        }
        
        else if (placement==BL)
        {
            BL=" X";
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
        }
    
        else if (placement==BC)
        {
            BC=" X";
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
        }
    
        else if (placement==BR)
        {
            BR=" X";
            
            cout <<"       |     |      "<<endl;
            cout <<"    "<<TL<<" | "<<TC<<"  | "<<TR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<ML<<" | "<<MC<<"  | "<<MR<<"  "<<endl;
            cout <<"  _____|_____|_____   "<<endl;
            cout <<"       |     |        "<<endl;
            cout <<"    "<<BL<<" | "<<BC<<"  | "<<BR<<"  "<<endl;
            cout <<"       |     |      "<<endl;
            
            
        }
        else
        {
            if (TL==" X"||" O"||TC==" X"||" O"||TR==" X"||" O"||ML==" X"||" O"||MC==" X"||" O"||MR==" X"||" O"||BL==" X"||" O"||BC==" X"||" O"||BR==" X"||" O")
                cout <<"Thats not a valid placement"<<endl;
            cout <<"You have lost your turn"<<endl;
        }
        
        
        
        
        
    cout <<"It's Player 2's Turn"<<endl;
       
    cin>>placement;
    
    if (placement==TL)
    {
        TL=" O";
       
    }
    else if (placement==TC)
    {
        TC=" O";
    
    }
    
    else if (placement==TR)
    {
        TR=" O";
       
    }
    
    else if (placement==ML)
    {
        ML=" O";
        
    }
    
    else if (placement==MC)
    {
        MC=" O";
     
    }
    
    else if (placement==MR)
    {
        MR=" O";
    }
    
    else if (placement==BL)
    {
        BL=" O";
    }
    
    else if (placement==BC)
    {
        BC=" O";
    }
    
    else if (placement==BR)
    {
        BR=" O";
    }
    
    else
    {
        if (TL==" X"||" O"||TC==" X"||" O"||TR==" X"||" O"||ML==" X"||" O"||MC==" X"||" O"||MR==" X"||" O"||BL==" X"||" O"||BC==" X"||" O"||BR==" X"||" O")
            cout <<"Thats not a valid placement"<<endl;
        cout <<"You have lost your turn"<<endl;
    }
        
      
    
    
        if (TL==" X" and MC==" X" and BR==" X")
          {
           cout <<"Congrats you won!"<<endl;
           cout <<"If you want to play again type 1"<<endl;
              cin >>choice;
          }
        
    else if (TL==" X" and TC==" X" and TR==" X")
    {
        cout <<"Congrats you won!"<<endl;
        cout <<"If you want to play again type 1"<<endl;
        cin >>choice;
    }
    else if (TR==" X" and MC==" X" and BL==" X")
    {
        cout <<"Congrats you won!"<<endl;
        cout <<"If you want to play again type 1"<<endl;
        cin >>choice;
    }
    else if (ML==" X" and MC==" X" and MR==" X")
    {
        cout <<"Congrats you won!"<<endl;
        cout <<"If you want to play again type 1"<<endl;
        cin >>choice;
    }
    else if (BL==" X" and BC==" X" and BR==" X")
    {
        cout <<"Congrats you won!"<<endl;
        cout <<"If you want to play again type 1"<<endl;
        cin >>choice;
    }
    else if (TL==" X" and ML==" X" and BL==" X")
    {
        cout <<"Congrats you won!"<<endl;
        cout <<"If you want to play again type 1"<<endl;
        cin >>choice;
    }
    else if (TR==" X" and MR==" X" and BR==" X")
    {
        cout <<"Congrats you won!"<<endl;
        cout <<"If you want to play again type 1"<<endl;
        cin >>choice;
    }
    else if (TC==" X" and MC==" X" and BC==" X")
    {
        cout <<"Congrats you won!"<<endl;
        cout <<"If you want to play again type 1"<<endl;
        cin >>choice;
    }
    
       
    else if (TL==" O" and MC==" O" and BR==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
        
    else if (TL==" O" and TC==" O" and TR==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
    else if (TR==" O" and MC==" O" and BL==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
    else if (ML==" O" and MC==" O" and MR==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
    else if (BL==" O" and BC==" O" and BR==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
    else if (TL==" O" and ML==" O" and BL==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
    else if (TR==" O" and MR==" O" and BR==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
    else if (TC==" O" and MC==" O" and BC==" O")
        {
            cout <<"Congrats you won!"<<endl;
            cout <<"If you want to play again type 1"<<endl;
            cin >>choice;
        }
   
       

    
    }
    }
    
    
