#include<iostream>
using namespace std;
int add(int number1, int number2);
float divide(float number1,float number2);
main()
{
int number1,number2;
int result;
float resuult;
cout<<"Enter first number ";
cin>>number1
cout<< "Enter second number ";
cin>>number2;
result= add(number1,number2);
cout<< "the sum is " <<result <<endl;

resuult= divide(number1,number2);
cout<< "the division is " <<resuult <<endl;

}
   int add(int number1, int number2)
  {
   int sum;
   sum= number1+number2;
   return result;
   }
  float divide(float number1,float number2)
   {
   float div;
   div= number1/number2;
   return resuult;
   }