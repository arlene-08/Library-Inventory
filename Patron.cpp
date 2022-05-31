
#include "Patron.h"
#include <iostream>
#include <string>

using namespace std;

Patron::Patron(int ID, string nm){
    patronID = ID;
    name = nm;
    finebalance = 0.00;
}

int Patron::getID(){
    return patronID;
}

string Patron::getname(){
    return name;
}

float Patron::getfinebalance(){
    return finebalance;
}

int Patron::getbooks_out(){
    return books_out;
}

Patron* Patron::getnext(){
    return next;
}

void Patron::setid(int ID){
    patronID = ID;
}

void Patron::setname(string nm) {
    name = nm;
}

void Patron::setnext(Patron* np){
    next = np;
}

void Patron::print(){
    cout << " Patron ID: "<<patronID<<", Name: "<<name<<endl;
}

