/*
Write a program to compute the area of a triangle and a circle by overloading the area() function.
*/

#include<iostream>
using namespace std;
#define PI 3.14

double area(double b,double h){
    return (1/2)*b*h;
}

double area(double r){
    return PI*r*r;
}

int main(){
    double base,height,radius;
    cout<<"Enter the base and height\n";
    cout<<"Base: ";
    cin>>base;
    cout<<"Height: ";
    cin>>height;
    cout<<"Area of triangle\n";
    cout<<area(base,height);

    cout<<"Enter the radius of circle";
    cout<<"Radius: ";
    cin>>radius;
    cout<<"Area of circle\n";
    cout<<area(radius);
    
    return 0;
}