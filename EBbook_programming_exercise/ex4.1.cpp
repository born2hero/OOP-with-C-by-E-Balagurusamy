/*
Write a function to read a matrix of size m x n from the keyboard.
*/

#include<iostream>
using namespace std;
#define MAX 100

int matrix(int m,int n){
    int i=0,j=0,arr[MAX][MAX];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"arr["<<i<<"]["<<j<<"]= ";
            cin>>arr[i][j];
        }
    }

    // cout<<"Matrix is"<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<"\t";
    //     }
    //     cout<<"\n";
    // }
}

int main(){
    int m,n,arr[MAX][MAX];
    cout<<"Enter the number of rows m: ";
    cin>>m;
    cout<<"Enter the number of columns n: ";
    cin>>n;

    matrix(m,n);

    return 0;
}