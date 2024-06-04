//writing to text file
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile("example.txt");
    if (myfile.is_open())
    {
        myfile <<"This is another line.\n";
        myfile <<"This is another line.\n";
        myfile.close();
    }
    else
{
cout <<"unable to open file";
}
return 0;
}