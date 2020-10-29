// fizzbuzz.cpp
// This program will have a for loop and a while loop which count from 0 to 100.
// Each number will be printed, and for the for loop, if the current number is
// divisible by three, will output 'fizz'. if the number is divisible by 5, 
// will output 'buzz'. If divisible by both, will output 'fizzbuzz'. 

#include <iostream>
using namespace std;

int main() {
	for(int i = 0; i<= 100; i++)
	{
		cout << i;
		if(i % 3 == 0)
		{
			cout << "fizz";
		}

		if(i % 5 == 0)
		{
			cout << "buzz";
		}
		cout << endl;
	}
	return 0;
}
