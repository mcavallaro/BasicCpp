#include <cmath>
#include <iostream>

using namespace std; 

#define PI 3.141592

int main(){
    
    cout << "This program prints the definite integral of sin(100*x), x in [0,PI]" << endl;
    cout << "Insert the number n of iterations" << endl;
    int n;
    cin >> n ;
    double from = 0;
    double to = PI;
    double h = (to-from)/(double)n;
    double sum, x;

    //trapezium
    for(x=from; x <= (to-h); x += h){
        sum += sin(100*(x+h/2.0));
    }
    cout << "Trapezium rule: " << h*sum << endl;

    //rectangle
    sum = sin(100*from) + sin(100*to);
    for(int i = 1;i < n;i++) {
        sum += 2.0*sin(100*(from + i * h));
    }

    cout <<  "Rectangle rule: " << h * sum / 2.0 << endl;

    cout << "exact value is: " << (1-cos(100*PI))/100 << endl;

}

