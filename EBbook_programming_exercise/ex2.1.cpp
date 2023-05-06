/*
Write a program to display the following output using a single cout statement.

            Maths=90
            Physics=77
            Chemistry=69
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<setw(20)<<"Maths=90"<<"\n"<<setw(20)<<"Physics=77"<<"\n"<<setw(20)<<"Chemistry=69"<<"\n";
}