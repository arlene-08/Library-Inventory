//
//  Patrons.hpp
//  Simple Library Inventory
//
//  Created by Arlene Makia on 5/31/22.
//

#ifndef Patrons_hpp
#define Patrons_hpp

#include <stdio.h>
#include <stdio.h>
#include <map>
using namespace std;

class Patrons {
private:
    int patCount;
    
//    typedef map<int, Patron* > patrontype;
 //   patrontype patronList;
    
public:
    Patrons(){patCount = 0; }
    int getcount();
    void inccount();
    void deccount();

    
    void add_newPatron();
    void edit_Patron();
    void delete_Patron();
    void load_Patron();
    void store_Patron();
    void print_Patron();

};



#endif /* Patrons_hpp */
