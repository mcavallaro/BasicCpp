#include <iostream>

//this code has some bugs...

using namespace std;

int main() {
    int n;
    cout << " This program prints a Fibonacci series of lenght n."<< endl;
    cout << " Enter a value for n:"<< endl;
    cin >> n;

    int fib1 = 0; 
    int fib2 = 1;
    int fib = fib1+fib2;


    for ( int i = 0; i <= n; i++ )
    {
        cout << i << " " << fib << endl;
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    // return 0;
}

