/*
Temperature conversion from Fahrenheit to Celsius using class temp.
*/

#include<iostream>
using namespace std;

class temp{
    float farh,cel;
    public:
    void getTemp();
    void showTemp();
};

void temp::getTemp(){
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>farh;
}

void temp::showTemp(){
    cel=((farh-32)*5)/9;
    cout<<cel;
}

int main(){
    temp t1;
    t1.getTemp();
    t1.showTemp();

    return 0;
}