#include<iostream>
#include<cmath>
using namespace std; 
string symmetric(int digit1, int digit2, int digit3);

 main()
  {
   int usernum, rem, digit1, digit2, digit3; 
   string result;   
   cout<< "Enter a 3 digit number: ";
   cin>>usernum;
   cout<<endl;
   rem=usernum % 100;
   digit1=usernum/100;
   digit3= rem % 10;
   digit2=rem / 10;
   result=symmetric(digit1, digit2, digit3);
   cout<<result;
  }
 string symmetric(int digit1, int digit2, int digit3)
  { 
   string t = "True";
   string f = "False";
   
   if(digit1 == digit3)
    {
	 return t;
	}
   if(digit1!=digit3)
	{
	  return f;
	}
	return 0;
   }

 

  

