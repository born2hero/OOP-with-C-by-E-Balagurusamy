/*
Modify the class and the program of exercise 5.1 for handling 10 customers.
*/


#include<iostream>
#include<cstring>
using namespace std;

class Account{
    string name;
    double Acount_number;
    char type[20];
    int amount;
public:
    void InitialValue(){
        int balance;
        cout<<"Enter name of Account Holder"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Account number "<<endl;
        cin>>Acount_number;
        cout<<"Enter type of Account "<<endl;
        cin>>type;
        cout<<"Enter your amount when you open an account";
        amount=balance;
    }

    void deposit(){
        int amo;
        cout<<"Enter amount to be deposit"<<endl;
        cin>>amo;
        amount+=amo;
    }

    void withdraw(){
        int amo;
        cout<<"Enter amount to be withdraw"<<endl;
        cin>>amo;
        if(amount<amo){
            cout<<"Please Enter less amount"<<endl;
        }else{
            amount-=amo;
        }
    }
    
    void display(){
        cout<<"Name of Acount Holder is "<<name<<endl;
        cout<<"Total balance "<<amount<<endl;
    }
};

int main(){
    Account a[10];
    for(int i=0;i<10;i++){
        int num;
        int key;
        cout<<"Enter customer Number between 1 to 10"<<endl;
        cin>>num;

        cout<<"Enter 1 for open Account "<<endl;
        cout<<"Enter 2 for deposit "<<endl;
        cout<<"Enter 3 for withdraw "<<endl;
        cout<<"Enter 4 for diplay "<<endl;
        cin>>key;
        switch (key){
            case 1:
                a[num].InitialValue();
                break;
            case 2:
                a[num].deposit();
                break;
            case 3:
                a[num].withdraw();
                break;
            case 4:
                a[num].display();
                break;
            default:
                break;
        }
    }
    return 0;
}





