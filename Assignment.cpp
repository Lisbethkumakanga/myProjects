# include <iostream>
# include <string>

int main(){
   // dynamically allocating an integer
    int* X = new int;
    // dynamically allocating an integer
    std::string* Y = new std::string;
    
    std::cout<<"enter the value for the integer:";
    std::cin>>* X;
    std::cout<<"enter the value for the string:";
    std::cin>>* Y;
    std::cout<<"The value of the dynamically allocated integer is:"<<* X <<std::endl;
    std::cout<<"The value of the dynamically allocated string is:"<<* Y <<std::endl;
    
    return 0;
    
}