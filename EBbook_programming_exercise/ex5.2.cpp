/*
Write a class to represent a vector (a series of float values). Include member functions to perform the 
following tasks:

a) To create the vector
b) To modify the value of a given element 
c) To multiply by a scalar value
d) To display the vector in the form (10,20,30,...)

Write a program to test your class.
*/

#include<iostream>
using namespace std;

class Vector{
    float x,y,z;
public:
    void create();
    void modify();
    void multiply_by_scalar();
    void display();
};

void Vector::create(){
    cout<<"Enter the scaler values of vector quentity";
    cout<<"\nIn x direction :";
    cin>>x;
    cout<<"\nIn y direction :";
    cin>>y;
    cout<<"\nIn z direction :";
    cin>>z;
}

void Vector::modify(){
    int i;
    display();
    cout<<"\nEnter the direction in which you want to modify vector\n1. x-dimension\n2. y-dimension\n3. z-dimension\n";
    cin>>i;
    if(i==1){
        cout<<"\nEnter new x :";
        cin>>x;
    }
    else if(i==2){
        cout<<"\nEnter new y :";
        cin>>y;
    }
    else if(i==3){
        cout<<"\nEnter new z :";
        cin>>z;
    }
    display();
}

void Vector::multiply_by_scalar(){
    int scalar;
    cout<<"\nEnter scalar quantity to multiply by :";
    cin>>scalar;
    x=x*scalar;
    y=y*scalar;
    z=z*scalar;
    display();
}

void Vector::display(){
    cout<<"\nEntered vector is :"<<x<<"i + "<<y<<"j + "<<z<<"k";
}

int main(){
    Vector v1;
    v1.create();
    v1.modify();
    v1.multiply_by_scalar();
    v1.display();

    return 0;
}