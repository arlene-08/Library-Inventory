//
//  main.cpp
//  Library Inventory
//  created by Arlene Makia
//

#include <iostream>
#include<cstring>
#include<fstream>
#include "Patron.h"
#include "Patrons.h"

using namespace std;

enum Menu { Add_Patron=1, Delete_Patron=2,Add_Book=3,Edit_Book=4, Find_Book=5,Delete_book=6, Quit=7};
 
int choice;

int main(){
  //Display menu options   
    cout << endl;
        cout << "Menu Options" <<endl;
        cout<< "1.  Add Patrons" << endl;
        cout <<"2.  Delete Patrons" <<endl;
        cout <<"3.  Add Book" << endl;
        cout <<"4.  Edit Book" <<endl;
        cout <<"5.  Find Book" <<endl;
        cout <<"6.  Delete Book" <<endl;
        cout <<"7. Quit" <<endl;
        bool isChoice = true;

    int id = 0;
    Patrons Pat;
    do {
            //int PatronID;
             
               cout << "Enter choice: "; cin>>choice;
               switch (choice)
               {
                   case Add_Patron:
                   cout << "You are now adding a new patron" <<endl;
                       Pat.add_newPatron();
                   isChoice=false;
                   break;
                   
                   case Delete_Patron:
                   cout <<"Removing Patron"<< endl;
                       cout<< "Enter the Patron ID to delete: "<<endl;
                       cin>>id; cin.ignore();
                      // Pat.delete_Patron(id);
                       cout << id <<" has been deleted."<<endl;
                   isChoice=false;
                   break;
                       
                   case Add_Book:
                   cout<<"Adding more books" <<endl;
                   cout<<" Enter ID of student to search: ";
                  // cin>>PatronID;
                   
                   isChoice=false;
                   break;
                   
                   case Edit_Book:
                   cout << "Editing book information" << endl;
                   
                   isChoice=false;
                   break;
                       
                   case Find_Book:
                       cout << "Book Search" <<endl;
                       isChoice=false;
                       break;
                       
                   case Delete_book:
                       cout<<"Removing a book from this account..."<<endl;
                       isChoice=false;
                       break;
                       
                   case Quit:
                   cout << "See you next time !" <<endl;
                   isChoice=false;
                   //exit;
                   break;

    //keep asking for valid entry
                   default:
                   cout << "You entered an invalid option. Try Again." <<endl;
                   isChoice=true;
                   break;
               }
           } while (isChoice);
           
        
        
        
        
        
        
        return 0;
    }



