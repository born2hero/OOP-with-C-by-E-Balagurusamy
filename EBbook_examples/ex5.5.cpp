// Static member function

#include<iostream>
using namespace std;

class test{
    int code;
    static int count;               // static member variable
    public:
        void setcode(void){
            code= ++count;
        }
        void showcode(void){
            cout<<"object number: "<<code<<endl;
        }
        static void showcount(void){    // static member function
            cout<<"count: "<<count<<endl;
        }
};

int test::count;

int main(){
    test t1,t2;

    test::showcount();          // accessing static function
    t1.setcode();
    test::showcount();          // accessing static function
    t2.setcode();
    test::showcount();


    test t3;
    t3.setcode();

    // test::showcount();
    t3.showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}