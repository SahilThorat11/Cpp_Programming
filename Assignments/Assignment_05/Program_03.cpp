#include<iostream>
using namespace std;

void CheckLeapYear(int iNo)
{
    if(iNo % 4 == 0)
    {
        cout << "It is leap Year\n";
    }
    else
    {
        cout << "It is not leap year\n";
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the year : ";
    cin >> iValue;

    CheckLeapYear(iValue);

    return 0;
}