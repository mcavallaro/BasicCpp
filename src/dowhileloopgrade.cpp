#include <iostream>

using namespace std;

int main()
{
	// Determines whether to loop again.
	char yesno;

	do
	{
		// Mark between 0 and 100.
		int mark;

		cout << "Enter your mark: ";
		cin >> mark;

		if(mark < 0 || mark > 100)
			cout << "Invalid mark." << endl;
		else if(mark >= 70)
			cout << "You got an A. Well done!" << endl;
		else if(mark >= 60)
			cout << "You got a B." << endl;
		else if(mark >= 50)
			cout << "You got a C." << endl;
		else if(mark >= 40)
			cout << "You got a D." << endl;
		else
			cout << "You failed." << endl;

		cout << "Check another mark? [Y/N] ";
		cin >> yesno;

	} while(yesno == 'Y' || yesno == 'y');

	cout << "Goodbye!" << endl;

	return 0;
}

