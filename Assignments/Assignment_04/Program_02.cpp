#include<iostream>
using namespace std;

void RevFactors(int iNo)
{
    int iCnt = 0, iMul = 1;

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    RevFactors(iValue);

    return 0;
}