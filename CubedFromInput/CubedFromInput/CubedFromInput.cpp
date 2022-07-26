// CubedFromInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Power Function, Defaults to Cubed
long int PowerValue(int number, int power = 3);
void InvalidInputEvent();

int main()
{
    int input;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> input;

        if (!cin.fail()) break;
        InvalidInputEvent();
    }
    cout << PowerValue(input) << endl;
}

long int PowerValue(int number, int power) {
    // Break if power amount has reached zero
    if (power == 0) return 1;
    return number * PowerValue(number, power - 1);
}

void InvalidInputEvent() 
{
    cin.clear();
    cin.ignore(99999, '\n');
    system("cls");
    cout << "Invalid Input!" << endl;
}
