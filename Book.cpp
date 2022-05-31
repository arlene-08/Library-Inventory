

#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

 Book::Book (string Author, string Title, int num, int LibId, float Cost, string status){
    author = Author;
    title = Title;
    ISBNnum = num;
    libID = LibId;
    cost = Cost;
    currStatus = status;
};

string Book::getauthor(){
    return author;
}
string Book::gettitle(){
    return title;
}

int Book::getISBNnum(){
    return ISBNnum;
}
int Book::getlibID(){
    return libID;
}
string Book::getcurrStatus(){
    return currStatus;
}

void Book::setauthor(string Author){
    author = Author;
}

void Book::settitle(string Title){
    title = Title;
}
void Book::setISBNnum (int num){
    ISBNnum = num;
}
void Book::setlibID(int LibId){
    libID = LibId;
}
void Book::setcost(float Cost){
    cost = Cost;
}
void Book::setcurrStatus(string status){
    currStatus = status;
}
