#include <iostream>

using namespace std;

int main()
{
	// Mark between 0 and 100.
	int mark;

	cout << "Enter your mark (invalid mark to exit): ";
	cin >> mark;

	while(mark >= 0 && mark <= 100)
	{
		if(mark >= 70)
			cout << "You got an A. Well done!" << endl;
		else if(mark >= 60)
			cout << "You got a B." << endl;
		else if(mark >= 50)
			cout << "You got a C." << endl;
		else if(mark >= 40)
			cout << "You got a D." << endl;
		else
			cout << "You failed." << endl;

		// Notice that we repeat the code from outside the loop. There
		// is a way to avoid this.
		cout << "Enter your mark (invalid mark to exit): ";
		cin >> mark;

		// This program has a bug. What happens if you enter something
		// other than an integer? Try it! Incidentally, Ctrl+C at the
		// terminal will interrupt and kill a running program...
	}

	cout << "Goodbye!" << endl;

	return 0;
}

