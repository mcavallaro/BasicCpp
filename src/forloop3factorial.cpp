#include <iostream>

using namespace std;

// This program has several bugs. Find them!

int main()
{
	int n, factorial;
	cout << "Enter an integer: ";
	cin >> n;
	factorial = n;
	for(int i = n - 1; i > 1; i--)
		factorial *= i;
	cout << "The factorial of " << n << " is " << factorial << "." << endl;

	return 0;
}

