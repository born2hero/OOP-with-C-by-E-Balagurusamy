/*
Write a macro that obtains the largest of three numbers.
*/

#include<iostream>
using namespace std;
#define LARGEST(a,b,c) ((a > b)?((a > c)?a:c):((b > c)? b:c))

int main(){
    int a,b,c;

    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    cout<<LARGEST(a,b,c);

    return 0;
}