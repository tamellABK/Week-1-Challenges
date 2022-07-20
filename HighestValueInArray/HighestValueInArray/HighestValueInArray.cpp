#include <iostream>

using namespace std;

int DetermineArrayHighest(int array[], int size);

int main()
{
    // Test Array, Can be changed to any size with any values to test
    int testArray[] { 1,25,1434,5,555,123,0,22,54,6123 };

    // Sizeof(array) gives byte usage in array, divide by variable type to get array size
    cout << DetermineArrayHighest(testArray, sizeof(testArray) / sizeof(int)) << 
        " is the highest number in the given array!" << endl;
}

// Function To Get the largest Value From An Array
// Parameters: Array / Size of the Array
int DetermineArrayHighest(int array[], int size) {
    int highestVal = array[0];

    for (int i = 1; i < size; i++) 
    {
        if (array[i] > highestVal) { highestVal = array[i]; }
    }

    return highestVal;
}