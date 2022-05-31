

#ifndef Patron_h
#define Patron_h

#include <stdio.h>
#include <string>

class Patron{
private:
    int patronID;
    std::string name;
    float finebalance;
    int books_out;
    Patron* next ;
    
public:
    Patron(int, std::string);
    int getID();
    std::string getname();
    float getfinebalance();
    int getbooks_out();
    Patron* getnext();
    void setid(int);
    void setname(std::string);
    void setbooks_out(int);
    void setnext(Patron*);
    void print();
    
    
};


#endif /* Patron_hpp */
