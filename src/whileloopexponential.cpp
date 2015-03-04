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
	std::cout << "Enter a real (?) number: " << std::endl;
	std::cin >> x;
	std::cout << "Enter another real number (smaller than 1): " << std::endl;
	std::cin >> precision;
	std::cout << "This program will compute the truncated series expansion of exp(" << x <<")" << std::endl;

    result = 1;
    n = 1;
    factorial = 1;
	while(term > precision) {
//        std::cout << term <<std::endl;
        term  = pow(x,n)/(double)factorial;
        result = result + term;
        n = n + 1;
        factorial *= n; 
	}

	std::cout << "True value: " << exp(x) << std::endl;
	std::cout << "Your approximation: " << result << std::endl;
    std::cout << "Print with higher precision in order see some difference..." << std::endl;
	std::cout << "True value: " << std::setprecision(10) << exp(x) << std::endl;
	std::cout << "Your approximation: " << std::setprecision(10) << result << std::endl;
	return 0;
}

