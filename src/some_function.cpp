#include <iostream>

using namespace std;

int some_function(int n);

int main()
{
	cout << "We're going to call some_function three times, " <<
		"and display its return value each" << endl << "time." << endl;

	cout << some_function(-5) << endl;
	cout << some_function(20) << endl;
	cout << some_function(55) << endl;

	return 0;
}

int some_function(int n)
{
	if(n < 0) return 0;

	cout << "Input was positive." << endl;
	return 100 * n;
}

