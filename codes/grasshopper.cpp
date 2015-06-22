#include <iostream>

using namespace std;

//prototype variables 
void mystery ( int n ) ;

int i = 10 ;

int main () {
mystery ( i ) ;
cout << " i is " << i << endl ;
return 0;
}
void mystery ( int n ) {
n ++;
cout << " n is " << n << endl ;
}

