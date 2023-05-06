/*
Write a program to read the value of a,b and c and display the value of x,
where x=a/b-c

Test your program for the following values:
    a) a=250,b=85,c=25
    b) a=300,b=70,c=70
*/


#include<iostream>
using namespace std;

int main(){
    cout<<"Program to calculate x=a/b-c"<<endl;

    float a,b,c,x; 

    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;

    x=a/b-c;

    cout<<"The value of x is "<<x<<endl;

    return 0;
}