// Write a program to print the following output using for loops
// 1
// 22
// 333
// 4444
// 55555

#include<iostream>
using namespace std;

int main(){
    int n,i=0,j=0;
    cout<<"Enter the number of loops to print: ";
    cin>>n;

    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}