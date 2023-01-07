#include<iostream>
using namespace std;
string calculatesum(int digit1, int digit2, int digit3, int digit4, int digit5);
 main()
  {
    int usernum, rem1,digit1,rem2,digit2,rem3, digit3, digit4, digit5;
    cout<< "Enter a 5 digit number: ";
    cin>>usernum;
    rem1=usernum % 10000;
    digit1=usernum/10000;
    rem2= rem1 % 1000;
    digit2=rem1 / 1000;
    digit3=rem2/100;
    rem3= rem2%100;
    digit4=rem3 / 10;
    digit5= rem3 % 10;
	string result;
	result= calculatesum(digit1, digit2, digit3, digit4, digit5);
	cout<<result;
  }
 string calculatesum(int digit1, int digit2, int digit3, int digit4, int digit5)
  { 
    string odd= "Oddish";
	string even= "Evenish";
    int sum;
    sum= digit1+digit2+digit3+digit4+digit5;
    if(sum%2 == 0)
	 {
	  return even;
	 }
	if(sum%2 == 1)
	 {
	   return odd;
	 }
	return 0;
  
  }
