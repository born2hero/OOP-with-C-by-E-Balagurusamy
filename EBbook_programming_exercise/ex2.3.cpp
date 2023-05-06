/*
Write a program that inputs a character from keyboard and displays its corresponding ASCII value on the screen.
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Program that inputs a character from keyboard and displays its corresponding ASCII value on the screen"<<endl;
    char ch;
    cout<<"Enter the character from keyboard"<<endl;
    cin>>ch;
    cout<<"The ASCII value of character "<<ch<<" is ";
    cout<<int(ch);
    
    return 0;
}