#include <iostream>
#include <cstring>
using namespace std;


int main(){
    string str1 ="Helllo";
    string str2 ="World";
    string str3;
     int len ;

     //copy str1 into str3
     str3= str1;
     cout <<"str3:"<<str3<<endl;

     //concatenates strl and str2
     str3= str1+str2;
     cout <<"str1+ str2:" <<str3 << endl;

     //total length of str1 after concatenation
     len = str3.size();
     cout <<"str3.size():"<< len << endl;

     return 0;
}