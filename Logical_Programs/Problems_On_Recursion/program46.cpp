// Input : 7891
// Output : 25

#include<iostream>
using namespace std;

int SumDigit(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        SumDigit(iNo / 10);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number : \n";
    cin >> iValue;

    iRet = SumDigit(iValue);

    cout << "Summation of digits are : " << iRet << "\n";

    return 0;
}