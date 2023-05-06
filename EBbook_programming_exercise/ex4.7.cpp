/*
Write a function power() to raise a number m to a power n. The function takes a double value of m and 
int value for n, and returns the result correctly. Use a default value of 2 for n to make the function to 
calculate squares when this argument is omitted. Write a main that gets the value of m and n from the user
to test the function.
*/

#include<iostream>
#include<math.h>
using namespace std;

double power(double m,int n=2){
    return pow(m,n);
}

int main(){
    int m,n;
    double result=0,def_res=0;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;

    def_res=power(m);
    result=power(m,n);

    cout<<m<<" power 2"<<" is "<<def_res<<" as a default argument\n";
    cout<<m<<" power "<<n<<" is "<<result;

    return 0;
}