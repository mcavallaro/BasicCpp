/* 
This is decision_making.cpp file.
It will teach you how to use if-structures.

This is an example to explain if-statements in C/C++:
- Single line if : if ( condition ) statement;
- Several line if's: if ( condition ) { statement 1; statement 2;}
- if-else: if ( condition ) statement 1; else statement 2;
- nested if-else.
*/  

#include <iostream>
#include <string>
#include <cstdlib> 
// I need it to use the functions: 
// srand(): it generate a seed for the random number generator. 
// rand(): it generate int number random between 0 and RAND_MAX (defined in the lib).
#include <ctime> 
// I need it to use the function time(): You get the actual time.
using namespace std;

// A C++ program begins at main().
int main()
{
	int number;// here I define the variable number as an integer.
	int mynumber;// here I define the variable number as an integer.
	double dnumber;//here I define the variable dnumber as a double precision number;
	string name; // here I define the variable name as a string.
	srand (time(NULL)); // here start a random seed, using the actual time.
   	
   	cout << "What is your name ? and press enter" << endl;
   	cin >> name;
    cout << "Your name is " << name << endl;

    dnumber = rand(); // I get a real number between [0,1) and store it in dnumber; 
    number = (int) (dnumber * 10 + 1); // generate a number between 1 and 10;

    cout << "type a number between 1 and 10, and press enter" << endl;
    cin >> mynumber; // store my answer in mynumber

    cout << mynumber << " is the number chosen by " << name << endl;

    // single line if  use.
    if(mynumber == number) cout << " You have guessed my secret number " << endl;

   	cout << "Have a good day" << endl;

    /*
    EXERCISE: 
    - Read carefully the statements of the programme.
    - Try to understand what is the possible output as a function of the possible input.
    - Is there something missing in your opinion?
    */

   	return 0;
}
