int ages[10];

// Get the ages.
for(int i = 0; i < 10; i++)
{
	cout << "Enter age " << i + 1 << ": ";
	cin >> ages[i];
}

// Sort the array. Don't worry about the syntax.
sort(ages, ages + 10);

// Display the results.
cout << "The ages are:" << endl;
for(int i = 0; i < 10; i++)
	cout << ages[i] << endl;
