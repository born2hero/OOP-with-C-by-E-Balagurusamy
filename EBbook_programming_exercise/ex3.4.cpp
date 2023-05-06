/*
Write a program to evaluate the following investment equation
V=P(1+r)^n
and print the tables which would give the value of V for various combination of the following values of P,
r and n:
P: 1000,2000,3000,...,10000
r: 0.10,0.11,0.12,...,0.20
n: 1,2,3,...,10
*/

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){

    float V,n,P,r;
    cout<<setw(4)<<"N"<<setw(7)<<"R"<<setw(9)<<"P"<<setw(16)<<"V"<<endl;

    for(n=1,P=1000,r=0.10;n<11;n++,P=P+1000,r=r+0.02){
        V=P*pow(1+r,n);
        cout<<setw(4)<<n<<setw(8)<<r<<setw(10)<<P<<setw(16)<<V<<endl;
    }
    
    return 0;
}