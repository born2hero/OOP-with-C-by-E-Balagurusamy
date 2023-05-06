// Write a function that creates a vector of user-given size M using new operators

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int user_size;
    cin >> user_size;
    int *p = new vector<int> g5(user_size);
    cout<<p;
    
    delete p;

    return 0;
}