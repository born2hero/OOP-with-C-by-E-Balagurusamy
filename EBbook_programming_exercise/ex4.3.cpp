/*
Rewrite the program of Exercise 4.2 to make the row parameter of matrix as a default argument.
*/

#include<iostream>
using namespace std;
#define MAX 100

int matrix(int m=3,int n=3){    // default argument
    int i=0,j=0,arr[MAX][MAX];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix is"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int m,n,arr[MAX][MAX];
    // cout<<"Enter the number of rows m: ";
    // cin>>m;
    // cout<<"Enter the number of columns n: ";
    // cin>>n;

    matrix(3);

    return 0;
}