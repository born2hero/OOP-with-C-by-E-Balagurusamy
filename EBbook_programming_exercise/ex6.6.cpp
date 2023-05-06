/*
Write a program to find a prime number using constructor.
*/

#include<iostream>
using namespace std;

class Prime{
    int a,k,i;
public:
    Prime(int x){
        a=x;
        }

    void calculate(){
        k=1;
        for(i=2;i<=a/2;i++){
            if(a%i==0){
                k=0;
                break;
            }
            else{
                k=1;
            }
        }            
    }

    void show(){
        if(k==1){
            cout<< "\nThe Number is Prime Number.";
        }
        else{
            cout<<"\nThe Number is Not Prime.";
        }
    }
};

int main(){
    int a;
    cout<<"\nEnter any Number: ";
    cin>>a;
    Prime obj(a);
    obj.calculate();
    obj.show();

    return 0;
}