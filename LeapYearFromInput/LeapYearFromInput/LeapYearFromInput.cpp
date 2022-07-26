#include <iostream>

using namespace std;

bool CenturyFactorOf400(int year);
bool YearFactorOf4(int year);
void LeapYearCheck(int year);

void InvalidInputEvent();

int main()
{
    while (true)
    {
        cout << "Please input a year to test if it's a leap year: ";
        unsigned int inputYear;
        cin >> inputYear;

        if (cin.fail()) {
            InvalidInputEvent();
            continue;
        }

        LeapYearCheck(inputYear);
        break;
    }
}

void LeapYearCheck(int year)
{
    //https://www.mathsisfun.com/leap-years.html
    if (YearFactorOf4(year) && CenturyFactorOf400(year))
    {
        cout << year << " is a leap year!" << endl;
    }
    else
    {
        cout << year << " is not a leap year!" << endl;
    }
}

bool YearFactorOf4(int year)
{
    if (year % 4 != 0) return false;
    return true;
}

bool CenturyFactorOf400(int year) 
{
    if (year % 100 == 0 && year % 400 != 0) return false;
    return true;
}

// Clear cin and warn user
void InvalidInputEvent() 
{
    cin.clear();
    cin.ignore(99999, '\n');
    system("cls");
    cout << "Invalid Input!" << endl;
}
