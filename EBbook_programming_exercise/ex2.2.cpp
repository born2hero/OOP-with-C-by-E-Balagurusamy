/*
Write a program to read two numbers from the keyboard and display the larger value on the screen.
*/

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Program to find greater number between two number"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;

    // cout<<(a>b)?a:b;
    if(a>b){
        cout<<a<<" is greater"<<endl;
    }else if(a==b){
        cout<<"Equal"<<endl;
    }else{
        cout<<b<<" is greater"<<endl;
    }

    return 0;
}