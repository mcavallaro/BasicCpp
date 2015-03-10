#include <iostream> // this header includes std::cout std::cin
#include <iomanip>  // this header allows to use std::setprecision() 
#include <cmath>    // this header has the declaration of many  mathematical function


int main() {
	double precision;
    double x;
    double result;
    double term=1000;
    double factorial;
    int n;
	std::cout << "Enter a  number: " << std::endl;
	std::cin >> x;
	std::cout << "Enter another number (smaller than 1): " << std::endl;
	std::cin >> precision;
	std::cout << "This program will compute the truncated series expansion of sin(" << x <<")" << std::endl;

    result = x;
    n = 3;
    factorial = 3*2;
	while(term > precision) {
        std::cout << n << " " << factorial <<std::endl;
        term  = pow(x,n)/(double)factorial;
        if (n%4==3)
            result = result - term;
        else if (n%4==1)
            result = result + term;
        else
            return 1;
        n = n + 2;
        factorial *= n*(n-1);
        
	}

	std::cout << "True value: " << sin(x) << std::endl;
	std::cout << "Your approximation: " << result << std::endl;
    std::cout << "Print with higher precision in order see some difference..." << std::endl;
	std::cout << "True value: " << std::setprecision(10) << sin(x) << std::endl;
	std::cout << "Your approximation: " << std::setprecision(10) << result << std::endl;
//	return 0;
}

