#include<iostream>
#include<cmath>
using namespace std;
float calculateheight(float base, float angle);
  main()
   {
	   float base;
	   float angle;
	   float height;
	   cout<< "Enter base ";
	   cin>>base;
	   cout<< "Enter angle ";
	   cin>>angle;
	   height= calculateheight(base, angle);
	   cout<< "The height is equal to " <<height;
	}
  float calculateheight(float base, float angle)  
   {
	  float theta;
	  float radian;
	  radian= angle/57.2958;
	  theta = tan(radian);
	  return theta * base ;
   }