//
//  main.cpp
//  Exercice_8
//
//  Created by Alexandre Leuthreau on 14/11/2021.
//

#include <iostream>

//Conversion en heures - minutes et secondes

using namespace std;

int main() {

    int amount;
    int hours, minutes, seconds;
    
    cout<<"CONVERSION EN HEURE / MINUTES / SECONDES"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Entrez la valeur d'une durée en secondes :"<<endl;
    cin>>amount;
    
    //calcul heures
    
    if (amount >= 3600)
        {
            hours = (amount/3600);
            amount = (amount-(3600 * hours));
            if (hours == 1)
            {
                cout<<"Il y a "<<hours<<" heure  \n";
            }
            else if (hours > 1)
            {
                cout<<"Il y a "<<hours<<" heures"<<endl;
            }
            else
            {
                cout<<"Error"<<endl;
            }
        }
    
    //calcul minutes
    
    if (amount >= 60)
        {
            minutes = (amount/60);
            amount = (amount-(60 * minutes));
            if (minutes == 1)
            {
                cout<<"Il y a "<<minutes<<" minute  \n";
            }
            else if (minutes > 1)
            {
                cout<<"Il y a "<<minutes<<" heures"<<endl;
            }
            else
            {
                cout<<"Error"<<endl;
            }
        }
    
    //calcul secondes
    
    if (amount %= 60)
         {
             seconds = (amount%60);
             amount = (amount-(60 * seconds));
             if (seconds == 1)
             {
                 cout<<"Il y a "<<seconds<<" seconde  \n";
             }
             else if (seconds > 1)
             {
                 cout<<"Il y a "<<seconds<<" secondes"<<endl;
             }
             else
             {
                 cout<<"Error"<<endl;
             }
         }
    
    return 0;
}
