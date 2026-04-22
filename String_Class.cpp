#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str1 ="Hello";
   string str2 = "World";
   string str3;
   int len;

   str3 = str1; // copy str1 int str3
   cout<<" str3 :"<< str3 <<endl;

   str3 = str1 + str2 ;
   cout<< "str3 : "<< str3 <<endl;// concatenate string 1 and string 2

   len = str3.size();
   cout<< "str3.size() :"<< len <<endl;

   return 0;

}