#include <iostream>

using namespace std;

int main()
{
    cout << "Please Input a year to test if it's a leap year: ";
    unsigned int inputYear;
    cin >> inputYear;

    if (inputYear % 4 != 0 || (inputYear % 100 == 0 && inputYear % 400 != 0)){
        cout << inputYear << " is not a leap year!" << endl;
    }
    else {
        cout << inputYear << " is a leap year!" << endl;
    }
}
