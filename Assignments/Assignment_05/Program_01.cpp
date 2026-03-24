#include<iostream>
using namespace std;

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        cout << "It is even number\n";
    }
    else
    {
        cout << "It is odd number\n";
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    CheckEvenOdd(iValue);

    return 0;
}