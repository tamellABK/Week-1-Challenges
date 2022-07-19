// CubedFromInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Power Function, Defaults to Cubed
long int PowerValue(int number, int power = 3);

int main()
{
    cout << PowerValue(5) << endl;
}

long int PowerValue(int number, int power) {
    // Break if power amount has reached zero
    if (power == 0) {
        return 1;
    }
    // Else multiple number and lower power amount by 1
    else {
        return number * PowerValue(number, power - 1);
    }
}
