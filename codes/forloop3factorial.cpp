#include <iostream>

using namespace std;

int factorial(int n);

int timestwo(int n);

int main()  {
	int n, fact;
	cout << "Enter an integer: ";
	cin >> n;

    fact = factorial( n );
	cout << "The factorial of " << n << " is " << fact << "." << endl;

    int nnn =  timestwo(n) ;
    cout << nnn << endl;

	return 0;
}

int factorial(int n){


    int f = n;
	for(int i = n - 1; i > 1; i--) {
		f = f *  i;
    }

    return f;
}

int timestwo(int n){

        cout << "I am computing n times 2" << endl;
        int a;
        a = n *2;


    return a;
}
