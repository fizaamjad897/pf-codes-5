#include<iostream>
using namespace std;
string printtens(int tens);
string printones(int ones);
 int main()
  { 
   int usernum;
   string alpha1;
   string alpha2;
   int ones;
   int tens;
   cout<< "Enter a number from 1-99 (you cannot enter digits from 11-19)  ";
   cin>>usernum;
   tens= usernum/10;
   ones= usernum%10;
   if(tens == 0)
   {
   cout<<printones(ones);
   return 0;
   }
   alpha1=printtens(tens);
   alpha2=printones(ones);
   cout<<alpha1;
   cout<< " ";
   cout<<alpha2;
   }
  string printtens(int tens)
   {
    string twenty = "twenty" , thirty= "thirty", forty= "forty", fifty= "fifty";
    string sixty= "sixty" , seventy = "seventy" , eighty = "eighty" , ninety = "ninety";
    if(tens == 0)
     {
      cout<< " ";
     }
    if(tens == 2)
     {
      return twenty;
     }
    if(tens == 3)
     {
      return thirty;
     }
    if(tens == 4)
     {
      return forty;
     }
    if (tens == 5)
     {
      return fifty;
     }
    if (tens == 6)
     {
      return sixty;
     }
    if(tens == 7)
     {
      return seventy;
     }
    if( tens== 8)
    {
     return eighty;
    }
    if( tens== 9)
    {
     return ninety;
    }
	return 0;
   }
 string printones(int ones)
 {
   string one="one" , two ="two", three= "three" , four= "four" ,five= "five";
   string six= "six" , seven = "seven" , eight= "eight" , nine = "nine";
   if(ones == 1)
    {
	 return one;
	}
   if(ones == 2)
    {
     return two;
    }
   if(ones == 3)
    {
	 return three;
    }
   if(ones == 4)
    {
     return four;
    }
   if(ones == 5)
    {
	 return five;
    }
   if(ones == 6)
    {
     return six;
    }
   if(ones == 7)
    {
     return seven;
    }
   if(ones == 8)
	{
	 return eight;
	}
   if(ones == 9)
    {
	 return nine;
    }
	return "0";
 }
