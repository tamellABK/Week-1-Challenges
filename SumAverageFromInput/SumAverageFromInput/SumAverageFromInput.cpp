#include <iostream>

using namespace std;

int AverageInts(int sum, int numOfValues);
int SumArrayInts(int* arrayPtr, int arraySize);
void PopulateArray(int* arrayPtr, int arraySize);

int main()
{
    // Initialize Ints
    int sum, average, inputNum;

    
    while (true)
    {
        cout << "How many numbers will you type?: ";
        cin >> inputNum;

        // Validate input, break if input passes
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(99999, '\n');
            continue;
        }
        break;
    }
    

    int* intArray = new int[inputNum];

    PopulateArray(intArray, inputNum);

    // Calculation on Array Integers
    sum = SumArrayInts(intArray, inputNum);
    average = AverageInts(sum, inputNum);

    // Output Results
    cout << "Sum: " << sum << endl << "Average: " << average << endl;

    // Cleanup
    delete[] intArray;
    intArray = nullptr;
}

int AverageInts(int sum, int numOfValues)
{
    return sum / numOfValues;
}

int SumArrayInts(int* arrayPtr, int arraySize)
{
    int totalValue = 0;
    for (int i = 0; i < arraySize; i++)
    {
        totalValue += arrayPtr[i];
    }
    return totalValue;
}

void PopulateArray(int* arrayPtr, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Input A Number: ";
        int input;
        cin >> input;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(99999, '\n');

            // Run back a loop cycle since input didn't validate
            i--;
        }
        else 
        {
            arrayPtr[i] = input;
        }
    }
}