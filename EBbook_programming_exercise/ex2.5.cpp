/*
Write a C++ program that will ask for a temperature in Fahrenheit and display it in Celsius.
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Program for convert Fahrenheit to Celsius"<<endl;

    float cel,farh;

    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>farh;

    cel=((farh-32)*5)/9;

    cout<<"Temperature in Celsius: "<<cel;

    return 0;
}