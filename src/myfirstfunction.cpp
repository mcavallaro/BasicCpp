#include <iostream>

using namespace std;


//function  prototype
int some_function( int n ) ;


int main() {
    int n, d;
    cout << "insert an integer number" << endl;
    cin >> n;
    
    d = some_function(n);
    // the result of function has been saved on d.
    cout << d << endl;

	return 0;



}

//function definition  (notice that it has the same structure as the main)
int some_function ( int n ) {
    if ( n <= 0) {
        return 0;
    }
    cout << " Input was positive . " << endl ;
    return 100 * n ;
}
