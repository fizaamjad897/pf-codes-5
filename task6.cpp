#include<iostream>
using namespace std;
main()
{
string name;
float matricMarks;
float interMarks;
float ecatMarks;
float matricperc;
float interperc;
float ecatperc;
float matricweightage;
float interweightage;
float ecatweightage;
float aggregate;
cout<< "Enter matric marks ";
cin>>matricMarks;
cout<< "Enter inter marks ";
cin>>interMarks;
cout<< "Enter ecat marks ";
cin>>ecatMarks;
matricperc= (matricMarks/1100)*100;
interperc= (interMarks/550)*100;
ecatperc= (ecatMarks/400)*100;
matricweightage=(10*matricperc)/100;
interweightage=(40*interperc)/100;
ecatweightage= (50*ecatperc)/100;
aggregate= matricweightage+interweightage+ecatweightage;
cout<<"your aggregate is  " <<aggregate;
}