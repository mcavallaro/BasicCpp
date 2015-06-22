// This program shows how to use a "stream"
// and define functions that can take, as argument a reference or pointer.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;


void sayHello2(ostream & stream);
void sayHello(ostream *stream);


int main() {
    ofstream fout;
    ofstream *fout_ptr;
    fout_ptr = &fout;
	fout.open("coutfout.dat");

    sayHello(fout_ptr);
	sayHello2(fout);

	fout.close();
    return 0;
}



void sayHello2(ostream & stream) {
    stream << "Hello World" << endl;
	cout << "An Hello World message has been printed on the file using the syntactic pass-by-reference" <<endl;
    return;
}

void sayHello(ostream *stream) {
    (*stream) << "Hello World" << endl;
	cout << "An Hello World message has been printed on the file passing the value of the pointer to stream" <<endl;
    return;
}

