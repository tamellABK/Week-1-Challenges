#include <iostream>

using namespace std;

void InvalidInputEvent();

int GetFactorAmount(int val);
bool isFactor(int val, int possFactor);

void PopulateArray(int* arrayToPopulate, int val);
void OutputArray(int* factorArray, int arraySize);

int main()
{
	int userVal, arraySize;
	int* factorArray;

	while (true)
	{
		cout << "Enter a number to find its factors!: ";
		cin >> userVal;

		if (!cin.fail()) break;
		InvalidInputEvent();
	}

	// Get Array size prior to initialization, warrants running through another loop
	arraySize = GetFactorAmount(userVal);
	factorArray = new int[arraySize];
	PopulateArray(factorArray, userVal);
	OutputArray(factorArray, arraySize);

	// Cleanup
	delete[] factorArray;
	factorArray = nullptr;
}

void OutputArray(int* factorArray, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << factorArray[i] << " ";
	}
}

void PopulateArray(int* arrayToPopulate, int val)
{
	int position = 0;
	for (int i = 1; i <= val; i++)
	{
		// Input Element in Array if Factor at position
		if (isFactor(val, i))
		{
			*(arrayToPopulate + position) = i;
			position++;
		}
	}
}

// Get Amount of factors for val for array initialization
int GetFactorAmount(int val) 
{
	int counter = 0;
	for (int i = 1; i <= val; i++)
	{
		if (isFactor(val, i)) counter++;
	}
	return counter;
}

bool isFactor(int val, int possFactor)
{
	return (val % possFactor == 0);
}

void InvalidInputEvent()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	system("cls");
	cout << "Invalid input!" << endl;
}
