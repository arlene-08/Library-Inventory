//
//  Patrons.cpp
//  Simple Library Inventory
//
//  Created by Arlene Makia on 5/31/22.
//

#include "Patrons.h"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int Patrons::getcount(){ return patCount;}
void Patrons::inccount() {patCount++;}
void Patrons::deccount() { patCount--;}

    
void Patrons::add_newPatron(){
    int ID; string buff;
//        Patron *temp;
        
        cout <<"Enter new patron ID: ";
        cin>> ID;
        cin.ignore();
        
        cout <<"Enter name: ";
        getline(cin, buff);
        cin.ignore();
        
 //       temp = new Patron(ID, buff);
        
      //       patronList[ID] = temp;
             inccount();
            cout << "You just added: "<< buff <<", Patron ID: "<<ID <<endl;
        }

     
void Patrons::edit_Patron(){
    add_newPatron();
}

/*void Patrons::delete_Patron(int id){
    patronList.erase(id);
    deccount();
}

Patron* Patrons::find_Patron(int ID){
    Patron *temp;
    temp = patronList[ID];
    return temp;
}*/

