#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	cout << "The sine of 100 radians is " << sin(100.0) << endl;
	cout << "e^100 is " << exp(100.0) << endl;

	cout << rand() << " is a pseduo-random number." << endl;
	
	cout << "Now we set the RNG's seed using the timer." << endl;
//	cout << srand( time(NULL) ) << endl; //If you comment this line, this program will generate the same series each run.


	cout << "Here are some more pseudo-random numbers:" << endl;
	for(int i = 0; i < 5; i++)
		cout << rand() << endl;

	printf("And finally, this is a string output by printf.\n");

	return 0;
}

