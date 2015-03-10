#include <iostream>
#include <cstdarg>

using namespace std;

double  ArithmeticMean(int num,...);


int main() {
   cout << "Arithmetic mean of 2, 3, 4, 5 is " <<  ArithmeticMean(4, 2,3,4,5) << endl;
   cout << "Arithmetic mean of 5, 10, 15 is " <<  ArithmeticMean(3, 5,10,15) << endl;
}



double ArithmeticMean(int num,...){

    va_list valist;
    double sum = 0.0;
    int i;

    /* initialize valist for num number of arguments */
    va_start(valist, num);

    /* access all the arguments assigned to valist */
    for (i = 0; i < num; i++) {
       sum += va_arg(valist, int);
    }
    /* clean memory reserved for valist */
    va_end(valist);

    return sum/num;
}
