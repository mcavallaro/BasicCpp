#include <iostream>

using namespace std;

// Prototypes.
void mystery(int i);

int main()
{
	int i = 10;

	mystery(i);

	cout << "Back in main(), i is " << i << endl;

	return 0;
}

void mystery(int i)
{
	i++;
	cout << "In mystery(), i is " << i << endl;
}

