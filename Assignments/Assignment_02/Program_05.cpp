#include<iostream>
using namespace std;

bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} 

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter number : \n";
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if (bRet)
    {
        cout << iValue << " is Even Number\n";
    }
    else
    {
        cout << iValue << " is Odd Number\n";
    }

    return 0;
} 