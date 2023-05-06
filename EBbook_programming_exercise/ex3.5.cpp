/*
An election is contested by five candidates. The candidates are numbered 1 to 5 and the voting
is done by marking the candidate number on the ballot paper. Write a program to read the ballots
and count the votes cast for each candidate using an array variable count. In case, a number read is 
outside the range 1 to 5, the ballot should be considered as a 'spoilt ballet', and the program should 
also count the number of spoilt ballets.
*/

#include<iostream>
using namespace std;

int main(){
    int i,ballot,count[5];
    char ch;
    for(i=0;i<=5;i++){
        count[i]=0;
    }

    do{
        cout<<"\nEnter the ballot number :";
        cin>>ballot;
        switch(ballot){
            case 1: count[1]++;
            break;
            case 2: count[2]++;
            break;
            case 3: count[3]++;
            break;
            case 4: count[4]++;
            break;
            case 5: count[5]++;
            break;
            default: count[0]++;
        }
        cout<<" \nWant to vote again\n";
        cin>> ch;
    }
    while(ch=='y');
    for(i=1;i<=5;i++){
        cout<<"\nNo. of votes for candidate "<< i <<"="<<count[i];
    }
    cout<<"\n Spoilt ballots are "<<count[0];
    return 0;
}