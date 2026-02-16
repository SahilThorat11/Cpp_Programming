#include<iostream>
using namespace std;

bool CheckDivisible(int iNo)
{
    if(iNo % 5 == 0)
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

    cout << "Enter the number : \n";
    cin >> iValue;

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        cout << iValue << " is Divisible by 5. \n";
    }
    else
    {
        cout << iValue << " is not Divisible by 5. \n";
    }
}