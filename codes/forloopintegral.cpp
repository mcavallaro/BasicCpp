#include <cmath>
#include <iostream>

using namespace std; 

#define PI 3.141592

int main(){
    
    cout << "This program prints the definite integral of sin(x), x in [0,PI]" << endl;
    cout << "Insert the number n of iterations" << endl;
    int n;
    cin >> n ;
    double from = 0;
    double to = PI;
    double h = (to-from)/(double)n;
    double sum, x;

    //rectagle
    for(x=from; x <= (to-h); x += h){
        sum += sin(x+h/2.0);
    }
    cout << "Rectangle rule: " << h*sum << endl;

    //trapezium
    sum = sin(from) + sin(to);
    for(int i = 1;i < n;i++) {
        sum += 2.0*sin(from + i * h);
    }

    cout <<  "Trapezium rule: " << h * sum / 2.0 << endl;

    cout << "Now test these methods with highly oscillating functions! e.g. sin(100*x)" << endl;

}

