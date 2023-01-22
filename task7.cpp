#include<iostream>
using namespace std;
main()
{
int mb;
int kb;
int bytes;
int bits;
cout<< "Enter megabytes to convert ";
cin>>mb;
kb=1024*mb;
cout<<mb <<"MB= "<<kb <<"KB";
cout<<endl;
bytes=1024*;
cout<<kb <<"KB= "<<bytes <<"Bytes";
cout<<endl;
bits= 8 * mb;
cout<<bytes <<"Bytes= "<<bits <<"bits"; 
}