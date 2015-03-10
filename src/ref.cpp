#include <iostream>

using namespace std;


//function  prototype
void timestwo(double& a);

int main() {

    double d=1;
    cout << d << endl;
    timestwo(d);
    cout << d << endl ;

	return 0;

}

//notice that this function does not return anything.
void timestwo( double& var) {
    var = var * 2;
}
//now implement a more complicated function that modify an int or a char.
