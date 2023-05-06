/*
Define a class to represent a bank account. Include the following members:
Data members
a) Name of the depositor
b) Account number
c) Type of account
d) Balance amount in the account

Member functions
a) To assign initial values
b) To deposit an amount
c) To withdraw an amount after checking the balance
d) To display name and balance

Write a main program to test the program.
*/

#include<iostream>
using namespace std;
#define MAX 100

class Bank{
    int acc_no,type_of_acc;
    double balance_amt;
    char name[MAX];
public:   
    void accept();
    void deposit();
    void withdraw();
    void display();
};

void Bank::accept(){
    cout<<"\nEnter the name of depositor: ";
    cin>>name;

    cout<<"\nEnter the acount number: ";
    cin>>acc_no;

    cout<<"\nType of account: ";
    cout<<"\n1. Savings";
    cout<<"\n2. Current\n";
    cin>>type_of_acc;

    cout<<"\nBalance amount: ";
    cin>>balance_amt;
}

void Bank::deposit(){
    int deposit_amt;
    cout<<"\nEnter the amount to be deposit: ";
    cin>>deposit_amt;
    cout<<"Balance: "<<deposit_amt+balance_amt;
    balance_amt=balance_amt+deposit_amt;
}

void Bank::withdraw(){
    int withdraw_amt;
    cout<<"\nEnter the amount to withdraw: ";
    cin>>withdraw_amt;
    if(withdraw_amt>balance_amt){
        cout<<"\nInsufficient balance";
    }else{
        cout<<"Balance: "<<balance_amt-withdraw_amt;
    }
    balance_amt=balance_amt-withdraw_amt;
}

void Bank::display(){
    cout<<"\nName: "<<name;
    cout<<"\nAccount number: "<<acc_no;
    // cout<<"\nType of account: "<<type_of_acc;
    if(type_of_acc==1){
        cout<<"\nType of account: Savings";
    }else if(type_of_acc==2){
        cout<<"\nType of account: Current";
    }else{
        cout<<"Wrong input. Choose correctly.";
        accept();
    }
    cout<<"\nBalance: "<<balance_amt;
}

int main(){
    Bank b1;
    b1.accept();
    b1.deposit();
    b1.withdraw();
    b1.display();

    return 0;
}