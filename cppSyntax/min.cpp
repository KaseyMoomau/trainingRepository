#include <iostream>
using namespace std;

// finds the minimum in an array of integers and returns the value
int findMinimumInteger(int array[], int length);
int findMinimumInteger(int array[], int length)
{
	int minimum = array[0]; // set minimum equal to first element
	for(int i = 1; i < length; i++)
	{
		if(array[i] < minimum) // check if element is less than current minimum
			minimum = array[i]; // and replace if so
	} 
	
	return minimum;
}

int main()
{
	// initialize and populate array of 10 integers
	int defaultArray[10];
       	for(int i = 0; i < 10; i++)
	{
		// generate random number from 1 to 100
		defaultArray[i] = rand() % 100 + 1;
		cout << defaultArray[i] << endl;
	}	

	// find minimum of array
	int minElement = findMinimumInteger(defaultArray, 10);
	cout << "minElement: " << minElement << endl;
}
