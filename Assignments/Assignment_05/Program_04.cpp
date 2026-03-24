#include<iostream>
using namespace std;

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        cout << "It is positive numbern";
    }
    else if(iNo < 0)
    {
        cout << "It is negative number\n";
    }
    else
    {
        cout << "It is zero\n";
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the year : ";
    cin >> iValue;

    CheckNumberType(iValue);

    return 0;
}