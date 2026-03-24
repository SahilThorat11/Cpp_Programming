#include<iostream>
using namespace std;

int CheckMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout << "Enter first number : ";
    cin >> iValue1;

    cout << "Enter second number : ";
    cin >> iValue2;

    iRet = CheckMax(iValue1, iValue2);

    cout << "Greater number between " << iValue1 << " and " << iValue2 << " is : " << iRet << "\n";

    return 0;
}