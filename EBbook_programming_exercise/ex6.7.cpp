/*
Write a program to display car features and specification by overloading constructors.
*/

// C++ program to demonstrate constructor overloading
#include <iostream>
using namespace std;

class Room{
    double length;
    double breadth;
public:
    Room(){         // 1. Constructor with no arguments
        length=6.9;
        breadth=4.2;
    }

    Room(double len) {      // 3. Constructor with one argument  
        length = len;
        breadth = 7.2;
    }

    Room(double l,double b) {   // 2. Constructor with two arguments
        length=l;
        breadth=b;
    }
    
    double calculateArea(){
        return length*breadth;
    }
};

int main() {
    Room room1,room2(8.2),room3(8.2, 6.6);

    cout << "When no argument is passed: " << endl;
    cout << "Area of room = " << room1.calculateArea() << endl;

    cout << "\nWhen breadth is fixed to 7.2 and (8.2) is passed:" << endl;
    cout << "Area of room = " << room2.calculateArea() << endl;

    cout << "\nWhen (8.2, 6.6) is passed." << endl;
    cout << "Area of room = " << room3.calculateArea() << endl;

    return 0;
}