#include<iostream>
using namespace std;

void Display(int iNo, int iCount)
{
    int iCnt = 0;

    if(iCount < 0)
    {
        iCount = -iCount;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout << iNo << "\t";
    }
}

int main()
{
    int iValue = 0, iFrequency = 0;

    cout << "Enter the number : \n";
    cin >> iValue;

    cout << "Enter the frequency : \n";
    cin >> iFrequency;

    Display(iValue, iFrequency);

    return 0;
}