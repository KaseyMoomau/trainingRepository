#include<iostream>  
  
using namespace std;

int main() 
{
 
	int num = 0;
	long bigNum = 340000000000000;
	float decimalNum = 34.000;
	double bigDecimalNum = 3.14159123123123123123;
	std::cout << "bigNum: "<< sizeof(bigNum) << "-bytes, value: " << bigNum << std::endl;
	std::cout << "bigDecimalNum: " << sizeof(bigDecimalNum) << "-bytes, value: " << bigDecimalNum << std::endl; 
	std::cout << "num: " << sizeof(num) << "-bytes, value: " << num << std::endl; 
	std::cout << "decimalNum: " << sizeof(decimalNum) << "-bytes, value: "<< decimalNum << std::endl; 
	
      
    return 0; 
} 
