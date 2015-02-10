/* 
This is cincoutendl.cpp file.
It displays several outputs and an input number in the console.

This is an example to explain cin/cout/endl in C++:
- cin is the extractor operator
- cout is the insertion operator
- endl is the end-of-line operator.


Note:
Pay attention to the new variable type "string" (s) - line 30. You have to include a 
new file at the beginning of the file, line 22:

#include <string> 


*/  

#include <iostream>
#include <string>
using namespace std;

// A C++ program begins at main().
int main()
{

	int number,number2; // here I define the variable "number1" and "number2" as integers.
   string s; // here I define the variable "s" as an string
   
   /* cout + insertion operator + a string with end-of-line character=\n + ; */	
   cout << "What a beautiful day... is not raining (?)\n";

   /* cout + insertion operator + a string + insertion operator + end-of-line variable + ; */
   cout << "Please, introduce two numbers as input" << endl;

   /* cin + extractor operator + variable number */
   cin >> number >> number2 ; // here we get the number and number2

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line variable + ; 
   cout << "The number 1 is : " << number << endl; /* Print the number introduced and stored in number*/ 

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line variable + ; 
   cout << "The number 2 is : " << number2 << endl; /* Print the number introduced and stored in number*/ 

   /* cout + insertion operator + a string + insertion operator + end-of-line variable + ; */
   cout << "Please, introduce a string as input" << endl;

   /* cin + extractor operator + variable s */
   cin >> s; // here we get the string

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line character + ; 
   cout << "The string is : " << s << '\n'; /* Print the number introduced and stored in number*/    

   // cout + insertion operator + a string + insertion operator + end-of-line character + ; 
   cout << "Please, introduce in order two numbers and a string as input" << '\n';
   /* cin + extractor operator + variable +  extractor operator + variable + extractor operator + variable + ;*/
   cin >> number >> number2 >> s; // here we get the string

   // cout + insertion operator + a string + insertion operator + variable + insertion operator + end-of-line character + ... ;
   cout << "number 1 is " << number << '\n' << "number 2 is " << number2 << endl << "string is " << s << endl;

   /*
   exercise: Write additional code to do:  
      - new cout statement that ask for a single number and a string
      - new cin statement that accept a single number and a string 
      - Print on screen the result. 
   */


   return 0;
}