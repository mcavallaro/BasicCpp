/* 
This is identifiers.cpp file.
It is a program to teach you identifiers rules.

Program contains mistakes. Find them checking the next rules:

1. Alphabet, digits and underscore are allowed.
2. They can not start with a digit.
3. keywords can be used as identifiers.
4. It is case-sensitive.
5. Special characters are not permitted.

tips:
i.    Pay attention to semicolons and capital letters. Check if variables are
defined at the beginning.

ii.   The compiler will tell you the errors. Solve first the 1 and second errors
and forget the last ones. Some of the errors happen because of the first ones....

*/  

#include <iostream>
#include <string>
using namespace std;

// A C++ program begins at main().
int main()
{

	int Number,number,_number; // here I define the variable "number1" and "number2" as integers.
   string 8s,_s // here I define the variable "s" as an string
   
   /* cout + insertion operator + a string with end-of-line character=\n + ; */	
   cout << "What a beautiful day... is not raining (?)\n";

   /* cout + insertion operator + a string + insertion operator + end-of-line variable + ; */
   cout << "Please, introduce two numbers as input" << endl;

   /* cin + extractor operator + variable number */
   cin >> number >> Number ; // here we get the number and number2

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line variable + ; 
   cout << "The number 1 is : " << number << endl; /* Print the number introduced and stored in number*/ 

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line variable + ; 
   cout << "The number 2 is : " << Number << endl; /* Print the number introduced and stored in number*/ 

   /* cout + insertion operator + a string + insertion operator + end-of-line variable + ; */
   cout << "Please, introduce a string as input" << endl;

   /* cin + extractor operator + variable s */
   cin >> _s; // here we get the string

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line character + ; 
   cout << "The string is : " << _s << '\n'; /* Print the number introduced and stored in number*/    

   // cout + insertion operator + a string + insertion operator + end-of-line character + ; 
   cout << "Please, introduce in order two numbers and a string as input" << '\n';
   /* cin + extractor operator + variable +  extractor operator + variable + extractor operator + variable + ;*/
   cin >> number >> Number >> _s; // here we get the string

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line character + ... ;
   cout << "number 1 is " << number << '\n' << "number 2 is " << Number << endl << "string is " << s << endl;

   /*
   exercise: Check the errors and compile. It should run without problems printing same output
   than previous exercise.
   */


   return 0;
}