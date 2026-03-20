#include<iostream>
using namespace std;

int FactorDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return iSumNonFact - iSumFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    iRet = FactorDiff(iValue);

    cout << "Difference between Summation of Factors and Non-Factors : " << iRet << "\n";

    return 0;
}