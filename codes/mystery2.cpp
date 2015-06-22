#include <iostream>

using namespace std;

// Prototypes.
void mystery(int& n);

int main()
{
	int i = 10;

	mystery(i);

	cout << "Back in main(), i is " << i << endl;

	return 0;
}

void mystery(int& n)
{
	n++;
	cout << "In mystery(), n is " << n << endl;
}

