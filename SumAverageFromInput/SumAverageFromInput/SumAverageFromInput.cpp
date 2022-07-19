// SumAverageFromInput.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
    // Prompt/Save numbers
    int first, second, third;
    cout << "Input First Number: ";
    cin >> first;

    cout << "Input Second Number: ";
    cin >> second;

    cout << "Input Third Number: ";
    cin >> third;

    // Calculate and Output Results
    cout << "Sum: " << (first + second + third) << endl <<
        "Average: " << (first + second + third) / 3 << endl;
}