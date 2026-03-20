#include<iostream>
using namespace std;

int MultFactor(int iNo)
{
    int iCnt = 0, iMul = 1;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    iRet = MultFactor(iValue);

    cout << "Multiplication of Factor is : " << iRet << "\n";

    return 0;
}