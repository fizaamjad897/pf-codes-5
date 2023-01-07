#include<iostream>
#include<cmath>
using namespace std;
void positiveformula(int a, int b, int c);
void negativeformula(int a, int b, int c);

  main()
  {
  int a=5;
  int b=6;
  int c=1;
  positiveformula(a,b,c);
  negativeformula(a,b,c);
  }
  void positiveformula(int a, int b, int c)
   {
   float sqb,ac4,root,numerator,minus,denominator,result1;
   sqb= pow(b,2);
   ac4= 4 * a * c;
   minus= sqb-ac4;
   root= sqrt(minus);
   numerator= -b + root;
   denominator= 2 * a;
   result1= numerator/denominator;
   cout<< "the result is " <<result1 <<endl;
   }
   void negativeformula(int a, int b, int c)
   {
   float sqb,ac4,root,minus,numerator,denominator,result2;
   sqb= pow(b,2);
   ac4= 4 * a * c;
   minus= sqb-ac4;
   root= sqrt(minus);
   numerator= -b - root;
   denominator= 2 * a;
   result2= numerator/denominator;
   cout<< "the result is " <<result2 <<endl;
   }
