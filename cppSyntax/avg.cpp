#include <iostream>
#include <typeinfo>
using namespace std;


// function that finds the average of four integers as a double.
double averageOfFourInts(int a, int b, int c, int d);
double averageOfFourInts(int a, int b, int c, int d)
{
	return (a+b+c+d)/4.0;
}

int main()
{
	double answer = averageOfFourInts(3,4,5,6);
	cout << answer << endl;
	cout << typeid(answer).name() << endl;
}

