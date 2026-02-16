#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 5;

    while(iCnt >= 1)
    {
        cout << iCnt << "\n";
        iCnt--;
    }
}

int main()
{
    Display();

    return 0;
}