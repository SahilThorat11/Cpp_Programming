#include<iostream>
using namespace std;

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    int largest = 0;

    if (iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        return largest = iNo1;
    }
    else if (iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        return largest = iNo2;
    }
    else
    {
        return largest = iNo3;
    }

    return largest;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    cout << "Enter first number : ";
    cin >> iValue1;

    cout << "Enter second number : ";
    cin >> iValue2;

    cout << "Enter Third number : ";
    cin >> iValue3;

    iRet = FindLargest(iValue1, iValue2, iValue3);

    cout << "Greater number between " << iValue1 << " " <<iValue2 << " and " << iValue3 << " is : " << iRet << "\n";

    return 0;
}