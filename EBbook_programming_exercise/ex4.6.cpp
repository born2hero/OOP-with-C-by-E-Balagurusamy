/*
Redo Exercise 4.5 using inline function. Test the function using a main program.
*/


#include<iostream>
using namespace std;

inline largest(int a,int b,int c){
    int large;
    large=(a > b)?((a > c)?a:c):((b > c)? b:c);
    return(large);
}

int main(){
    int a,b,c;

    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    cout<<largest(a,b,c);

    return 0;
}