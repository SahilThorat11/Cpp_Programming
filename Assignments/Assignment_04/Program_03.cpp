#include<iostream>
using namespace std;

DispalyNonFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    DispalyNonFactors(iValue);

    return 0;
}