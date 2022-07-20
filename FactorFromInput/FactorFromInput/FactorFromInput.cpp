#include <iostream>

using namespace std;

int main()
{
	// Loop Input until valid
	while (true) 
	{
		int userVal;
		cout << "Enter a number to find its factors!: ";
		cin >> userVal;

		//If Cin fail, clear and ignore all input and try again
		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input!" << endl;
		} 
		else 
		{
			// Loop through numbers until reaching sqrt
			// Floor to avoid duplicates
			for (int i = 1; i <= floor(sqrt(userVal)); i++) {

				// If % == 0, showcase the number tested, and the number of times it goes into the value
				
				if (userVal % i == 0) 
				{ 
					// Print in pairs
					cout << i << " " << (userVal / i) << " " << endl;
				}
			}

			// Break out of input loop once fully achieved success
			break;
		}
	}
	
}
