/*
Write a function that performs the same operation as that of exercise 4.7 but takes an int value for m.
Both the functions should have same name. Write a main that calls both the functions. Use the concept of 
function overloading.
*/


#include<iostream>
#include<math.h>
using namespace std;

double power(double m,int n=2){
    return pow(m,n);
}

double power(int m,int n=2){
    return pow(m,n);
}

int main(){
    int m,n;
    double x;
    double result=0,def_res=0;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter x: ";
    cin>>x;

    def_res=power(x);
    result=power(m,n);

    cout<<x<<" power 2"<<" is "<<def_res<<" as a default argument\n";
    cout<<m<<" power "<<n<<" is "<<result;

    return 0;
}