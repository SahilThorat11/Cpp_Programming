#include<iostream>
using namespace std;

PrintEven(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            cout << iCnt << "\t";
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    PrintEven(iValue);

    return 0;
}