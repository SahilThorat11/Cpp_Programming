#include<iostream>
using namespace std;

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout << "*\t";
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number : \n";
    cin >> iValue;

    DisplayPattern(iValue);

    return 0;
}