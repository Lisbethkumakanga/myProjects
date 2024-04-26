# include <iostream>


int main(){
   //prompt user to enter the dimensions of the 2D array
    int rows, cols;
    std::cout<<"enter the number of rows(max3):";
    std::cin >> rows;
    while(rows < 1 || rows > 3){
        std::cout<<"invalid number of rows. please enter a value between 1 and 3:";
        std::cin>>rows;
    }
    std::cout<<"enter the number of columns(max3):";
    std::cin>>cols;
    while(cols < 1 || cols > 3){
      std::cout<<"invalid number of columns. please enter a value between 1 and 3 :";
    std::cin>>cols;   
    }
     
    double ** DynamicArray = new double *[rows];
    for (int i = 0; i < rows; i++)
    DynamicArray[i] = new double [cols];
    
    for (int i = 0; i< rows; i++){
        for (int j = 0; j < cols; j++){
            std::cout<<"enter a value for element[i][j]:";
            std::cin>> DynamicArray[i][j];
            
        }
    }
    
    std::cout<<"The values of the 2D array are:"<<std::endl;
    for (int i = 0; i < rows; i++){
        for (int j =0; j < cols; j++){
            std::cout<<DynamicArray[i][j]<<"";
            
        }
        std::cout<<std::endl;
        
        return 0;
      }
   }  
      
    