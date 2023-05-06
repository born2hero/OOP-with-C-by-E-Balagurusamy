// Write a function using reference variables as arguments to swap the values of a pair of integers

#include<iostream>  
using namespace std;    

void swap(int *x, int *y){  
    int swap;  
    swap=*x;  
    *x=*y;  
    *y=swap;  
}

int main(){    
    int x=500, y=100;    
    swap(&x, &y);
    cout<<"Value of x is: "<<x<<endl;  
    cout<<"Value of y is: "<<y<<endl;  
    return 0;  
}   