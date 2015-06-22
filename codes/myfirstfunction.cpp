#include <iostream>

using namespace std;


//function  prototype
double some_function( int n ) ;
void another_function ( int n ) ;

    double cccc;


int main() {
    int n, d;
    cout << "insert an integer number" << endl;
    cin >> n;
    double ds;    
    ds = some_function(n);
    // the result of function has been saved on d.
    cout << ds << endl;

    another_function ( 100 );

	return 0;



}

//function definition  (notice that it has the same structure as the main)
double some_function ( int n ) {

    if ( n <= 0) {
        return 0;
    }
    cout << " Input was positive . " << endl ;
    return 10.1 * n ;
}

//function definition  (notice that it has the same structure as the main)
void another_function ( int n ) {
//    if ( n <= 0) {
//        return 0;
//    }
    cout << " Input was positive . " << endl ;
 //   return 100 * n ;
}
