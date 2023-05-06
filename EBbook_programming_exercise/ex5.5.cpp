/*
Create two classes DM and DB which store the value of distances. DM stores distances in meters and centimeters
and DB in feet and inches. Write a program that can read values for the class objects and add one object of DM
with another object of DB.
Use a friend function to carry out the adding operation. The object that stores the results may be a DM object
or DB object, depending on the units in which the results are required.
The display should be in the format of feet and inches or meters and centimeters depending on the object on display.
*/

#include<iostream.h>
#include<conio.h>
// class DB;
class DM
{
    int m,cm;
public:
    void get_data(){
        cout<<"\nEnter meter value : ";
        cin>>m;
        cout<<"\nEnter centimeter value: ";
        cin>>cm;
    }
    friend float sum(DM a,DB b);
};
class DB
{
              int ft,in;
   public:
               void get_data()
      {
cout<<"\nEnter feet value : ";
               cin>>ft;
cout<<"\nEnter inches value : ";
               cin>>in;
      }
      friend float sum(DM a,DB b);
};
float sum(DM a,DB b)
{
               float x,y,z;
   x=(a.m+(a.cm/100));
   y=(b.ft+(b.in/12));
   z=(x+(y*0.304)); //Since 1 ft = 0.304 m
   return z;
}
void main()
{
   DM a;
   DB b;
               cout<<"\nEnter the value in meter and centimeter: ";
               a.get_data();
   cout<<"\nEnter the value in feet and inches: ";
               b.get_data();
               sum(a,b);
   cout<<"\nThe summed value in meter is: "<<sum(a,b);

   return 0;
}