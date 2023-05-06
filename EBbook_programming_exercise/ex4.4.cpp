/*
The effect of a default argument can be alternatively achieved by overloading. Discuss with an example.
*/

#include<iostream>
using namespace std;

int sum(int a,int b){       
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

// function sum is being overloaded

int main(){
    int a,b,c,result=0;

    cout<<"Enter 2 Integers\n";
    cin>>a>>b;
    result=sum(a,b);
    cout<<"Addition= " << result<<"\n";

    cout<<"Enter 3 Integers\n";
    cin>>a>>b>>c;
    result=sum(a,b,c);
    cout<<"Addition= "<< result;

    return 0;
}