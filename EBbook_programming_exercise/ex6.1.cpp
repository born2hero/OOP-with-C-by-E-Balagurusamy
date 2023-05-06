// /*
// Design constructors for the classes designed in Programming exercises 5.1 through 5.5 of chapter 5
// */

// // // ex5.1

// // #include<iostream>
// // #include<cstring>
// // using namespace std;
// // #define MAX 100

// // class Bank{
// //     int acc_no,type_of_acc;
// //     char type_acc[MAX];
// //     double balance_amt;
// //     char name[MAX];
// // public:
// //     Bank();
// //     Bank(int,const char*,double,const char*);
// //     void accept();
// //     void deposit();
// //     void withdraw();
// //     void display();
// // };

// // Bank::Bank(){
// //     acc_no=101;
// //     strcpy(type_acc,"Savings");
// //     balance_amt=10000;
// //     strcpy(name,"Abhishek");
// // }

// // Bank::Bank(int ac_no,const char* typeacc,double bal_amt,const char* nm){
// //     acc_no=ac_no;
// //     strcpy(type_acc,typeacc);
// //     balance_amt=bal_amt;
// //     strcpy(name,nm);
// // }

// // void Bank::accept(){
// //     cout<<"\nEnter the name of depositor: ";
// //     cin>>name;

// //     cout<<"\nEnter the acount number: ";
// //     cin>>acc_no;

// //     cout<<"\nType of account: ";
// //     cout<<"\n1. Savings";
// //     cout<<"\n2. Current\n";
// //     cin>>type_of_acc;

// //     cout<<"\nBalance amount: ";
// //     cin>>balance_amt;
// // }

// // void Bank::deposit(){
// //     int deposit_amt;
// //     cout<<"\nEnter the amount to be deposit: ";
// //     cin>>deposit_amt;
// //     cout<<"Balance: "<<deposit_amt+balance_amt;
// //     balance_amt=balance_amt+deposit_amt;
// // }

// // void Bank::withdraw(){
// //     int withdraw_amt;
// //     cout<<"\nEnter the amount to withdraw: ";
// //     cin>>withdraw_amt;
// //     if(withdraw_amt>balance_amt){
// //         cout<<"\nInsufficient balance";
// //     }else{
// //         cout<<"Balance: "<<balance_amt-withdraw_amt;
// //     }
// //     balance_amt=balance_amt-withdraw_amt;
// // }

// // void Bank::display(){
// //     cout<<"\nName: "<<name;
// //     cout<<"\nAccount number: "<<acc_no;
// //     // cout<<"\nType of account: "<<type_of_acc;
// //     if(type_of_acc==1){
// //         cout<<"\nType of account: Savings";
// //     }else if(type_of_acc==2){
// //         cout<<"\nType of account: Current";
// //     }
// //     // }else{
// //     //     cout<<"Wrong input. Choose correctly.";
// //     //     accept();
// //     // }
// //     cout<<"\nBalance: "<<balance_amt;
// // }

// // int main(){
// //     Bank b1,b2,b3(102,"ABC",20000,"Savings");
// //     b1.accept();
// //     b1.deposit();
// //     b1.withdraw();
// //     b1.display();
// //     b2.display();
// //     b3.display();

// //     return 0;
// // }



// // ex5.2


// #include<iostream>
// using namespace std;

// class Vector{
//     float x,y,z;
// public:
//     Vector();
//     Vector(float,float,float);
//     void create();
//     void modify();
//     void multiply_by_scalar();
//     void display();
// };

// Vector::Vector(){
//     cout<<"\nDefault constructor\n";
//     x=10;
//     y=20;
//     z=10;
// }

// Vector::Vector(float a,float b,float c){
//     cout<<"\Parameterized constructor\n";
//     x=a;
//     y=b;
//     z=c;
// }

// void Vector::create(){
//     cout<<"Enter the scaler values of vector quentity";
//     cout<<"\nIn x direction :";
//     cin>>x;
//     cout<<"\nIn y direction :";
//     cin>>y;
//     cout<<"\nIn z direction :";
//     cin>>z;
// }

// void Vector::modify(){
//     int i;
//     display();
//     cout<<"\nEnter the direction in which you want to modify vector\n1. x-dimension\n2. y-dimension\n3. z-dimension\n";
//     cin>>i;
//     if(i==1){
//         cout<<"\nEnter new x :";
//         cin>>x;
//     }
//     else if(i==2){
//         cout<<"\nEnter new y :";
//         cin>>y;
//     }
//     else if(i==3){
//         cout<<"\nEnter new z :";
//         cin>>z;
//     }
//     display();
// }

// void Vector::multiply_by_scalar(){
//     int scalar;
//     cout<<"\nEnter scalar quantity to multiply by :";
//     cin>>scalar;
//     x=x*scalar;
//     y=y*scalar;
//     z=z*scalar;
//     display();
// }

// void Vector::display(){
//     cout<<"\nEntered vector is :"<<x<<"i + "<<y<<"j + "<<z<<"k";
// }

// int main(){
//     Vector v1,v2,v3(2.5,4.5,3.5);
//     v1.create();
//     v1.modify();
//     v1.multiply_by_scalar();
//     v1.display();
//     v2.display();
//     v3.display();

//     return 0;
// }
