/*
Refer to program 5.11 and write a function that recieves two matrix objects as arguments and returns a new
matrix object containing their multiplication result.
*/


/*
#include<iostream>
using namespace std;
#define MAX 3

class Matrix{
    int m[MAX][MAX];
public:
    void read(){
        cout<<"Enter the elements of 3x3 matrix:\n";
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                cout<<"m["<<i<<"]["<<j<<"]= ";
                cin>>m[i][j];
            }
        }
    }

    void display(){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                cout<<m[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }

    void multiply(Matrix m1[MAX][MAX],Matrix m2[MAX][MAX]);
    // friend Matrix multiply(Matrix);
};

void Matrix::multiply(Matrix m1[MAX][MAX],Matrix m2[MAX][MAX]){
    Matrix mul[MAX][MAX];
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            mul[i][j]=0;
            for(int k=0;k<MAX;k++){
                mul[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

// Matrix multiply(Matrix m1){

// }

int main(){
    Matrix m1[MAX][MAX],m2[MAX][MAX],m3;
    m3.multiply(m1,m3);

    return 0;    
}
*/

#include<iostream>
using namespace std;
#define MAX 3

class Matrix{
    int arr[MAX][MAX];
public:
    void takeInput(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            cin>>arr[i][j];
            }
        }
    }

    void Matrixmultiplication(Matrix m1, Matrix m2){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                arr[i][j]=0;
                for(int k=0;k<MAX;k++){
                arr[i][j]+=m1.arr[i][k]*m2.arr[k][j];
                }
            }
        }
    }
    
    void displayMatrix(){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Matrix m1,m2,m3;
    m1.takeInput();
    m2.takeInput();
    m3.Matrixmultiplication(m1,m2);
    m3.displayMatrix();

    return 0;
}

