#include<iostream>
using namespace std;
#define pi 3.14

int squareArea(int &);
int circleArea(int &);

int main(){
    int a=10;
    cout<<squareArea(a)<<" ";
    cout<<circleArea(a)<<" ";
    cout<<a<<endl;

    return 1;
}

int squareArea(int &a){
    // return a *== a;
    return a *= a;
}

int circleArea(int &r){
    return r=pi*r*r;
}