#include<iostream>
using namespace std;

int SumNonFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    iRet = SumNonFactors(iValue);

    cout << "Summation of all non Factors are : " << iRet << "\n";

    return 0;
}