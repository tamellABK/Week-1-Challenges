#include <iostream>

using namespace std;

int AverageInts(int sum, int numOfValues);
int SumArrayInts(int* arrayPtr, int arraySize);
void PopulateArray(int* arrayPtr, int arraySize);

int main()
{
    // Prompt/Save numbers
    int sum, average, inputNum;

    
    while (true)
    {
        cout << "How many numbers will you type?: ";
        cin >> inputNum;

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

    sum = SumArrayInts(intArray, inputNum);
    average = AverageInts(sum, inputNum);

    // Output Results
    cout << "Sum: " << sum << endl << "Average: " << average << endl;

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
            i--;
        }
        else 
        {
            arrayPtr[i] = input;
        }
    }
}