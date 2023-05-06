/*
A book shop maintains the inventory of books that are being sold at the shop. The list includes details
such as author, tile, price, publisher and stock position. Whenever a customer wants a book,the sales person
inputs the title and author and the system searches the list and displays whether it is available or
not. If it is not, an appropriate message is displayed. If it is, then the system displays the book
details and requests for the number of copies required. If the requested copies are available, The total 
cost of the requested copies is displayed; otherwise the message "Required copies not in stock" is displayed.
Design a system using a class called books with suitable member functions and constructors. Use new
operator in constructors to allocate memory space required.
*/

#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100

class books{
    char author[MAX],title[MAX],publisher[MAX];
    double price;
    int stock;
public:
    books();
    books(const char*,const char*,double,const char*,int);
    void accept();
    void display();
};

books::books(){
    strcpy("J K ROWLIN",author);
    strcpy("Harry Potter",title);
    price=2000;
    strcpy("McGraw Hill",publisher);
    stock=20;
}

books::books(const char* auth,const char* tle,double pri,const char* pub,int stk){
    strcpy(author,auth);
    strcpy(title,tle);
    price=pri;
    strcpy(publisher,pub);
    stock=stk;
}

void books::display(){

}

int main(){
    books b1;
    b1.display();

    return 0;
}