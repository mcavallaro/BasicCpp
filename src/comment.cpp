/* 
This is comment.cpp file.
It displays "Hello World" and an input number in the console.

This is an example to explain comments in C++:
- Multiple-line comments. (C/C++)
- Single-line comments. (only C++)
*/  

#include <iostream>
using namespace std;

// A C++ program begins at main().
int main()
{

	int number; // here I define the variable number as an integer.
   	
   	// Print Hello World
   	cout << "Hello World\n";

   	// Ask the user for an input:
   	cout << "Introduce a number as input" << endl;
   	cin >> number; // here we get the number

   	/* cin extracts the input value and save it in number variable */

   	cout << "The number is : " << number << endl; /* Print the number introduced and stored in number*/ 

   	return 0;
}