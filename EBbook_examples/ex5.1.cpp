#include<iostream>
using namespace std;

class item{
    int number;             // private by default
    float cost;             // private by default
    public:
        void getdata(int a,float b);   // prototype declaration to be defined

        // function defined inside the class
        void putdata(void){
            cout<<"number: "<<number<<endl;
            cout<<"cost: "<<cost<<endl;
        }
};

// member function definition
void item::getdata(int a,float b){    // use membership label
    number=a;               // private variables
    cost=b;                 // directly used
}

// main program
int main(){
    item x;                 // create object x

    cout<<"object x"<<endl;

    x.getdata(100,299.95);  // call member function
    x.putdata();            // call member function

    item y;                 // create another object y

    cout<<"object y"<<endl;

    y.getdata(200,175.50);
    y.putdata();
}

