/*
Write a program to take the input of faculty details(ID, name, post, qualification, address) and display it.
*/

#include<iostream>
using namespace std;
#define MAX 100

class Employees{
    int ID;
    string name,post,qualification,address;
public:
    void get_emp();
    void display();
};

void Employees::get_emp(){
    cout<<"Enter the employee id: ";
    cin>>ID;
    cout<<"\nEnter the name of employee: ";
    getline(cin,name);
    cout<<"\nEnter your post: ";
    getline(cin,post);
    // cin.get(post,MAX);
    cout<<"\nEnter your qualification: ";
    getline(cin,qualification);
    // cin.get(qualification,MAX);
    cout<<"\nEnter your address: ";
    getline(cin,address);
    // cin.get(address,MAX);
}

void Employees::display(){
    cout<<"\nEmployee ID: "<<ID;
    cout<<"\nEmployee name: "<<name;
    cout<<"\nEmployee post: "<<post;
    cout<<"\nEmployee qualification: "<<qualification;
    cout<<"\nEmployee address: "<<address;
}

int main(){
    // int n;
    // cout<<"\nEnter the number of employees :";
    // cin>>n;
    Employees e1,e2;
    e1.get_emp();
    // e2.get_emp();

    e1.display();
    // e2.display();

    return 0;
}