#include <iostream>

using namespace std;


//global variables
double a;

//function  prototype
double function() ;
double function2(double  ) ; //you do not necessary need to specify the argument name

int main() {

    a = 1; // a is already declared

    //local variable:
    double d=1;

    //this function use a global variable:
    cout << function() << endl ;

    //if your want to use a local variable:
    cout << function2(d) << endl ;

	return 0;

}

double function() {
    return a * 2; // you can use a, but not d.
}

double function2( double argument) {
    return argument* 2;
}
