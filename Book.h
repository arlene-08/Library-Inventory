
#ifndef Book_h
#define Book_h

#include <stdio.h>
#include <string>

class Book{
public:
    std::string author;
    std::string title;
    int ISBNnum;
    int libID;
    float cost;
    std::string currStatus;

private:
    Book(std::string, std::string, int, int, float, std::string);
    std::string getauthor();
    std::string gettitle();
    int getISBNnum();
    int getlibID();
    float getcost();
    std::string getcurrStatus();
    void settitle(std::string);
    void setauthor(std::string);
    void setlibID(int);
    void setcost(float);
    void setISBNnum(int);
    void setcurrStatus(std::string);
    
    };



#endif 
