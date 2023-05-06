// Example of Parameterized Constructor

#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int,int);

        // Point(int a,int b){         // inline parameterized constructor definition
        //     x=a;
        //     y=b;
        // }

        void display(){
            cout<<"("<<x<<","<<y<<")\n";
        }
};

Point::Point(int a,int b){              // external parameterized constructor definition
    x=a;
    y=b;
}

int main(){
    Point p1(1,1);                  // invoke parameterized contructor
    Point p2(5,10);
    cout<<"Point p1: ";
    p1.display();

    cout<<"Point p2: ";
    p2.display();

    return 0;
}