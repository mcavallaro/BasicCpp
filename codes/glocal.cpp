#include <iostream>

using namespace std;


//global variables


//function  prototype
double function( double a) ;
double function2(double  ) ; //you do not necessary need to specify the argument name

int main() {

double a;
    a = 1; // a is already declared

    //local variable:
    double d=1;

    //this function use a global variable:
    cout << function(a) << endl ;

    //if your want to use a local variable:
    cout << function2(d) << endl ;

	return 0;

}

double function(double a) {
    return a * 2; // you can use a, but not d.
}

double function2( double argument) {
    return argument* 2;
}
