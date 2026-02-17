#include<iostream>
using namespace std;

void DispayConvert(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        cout << "Converted character : " << cValue;
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        cout << "Converted character : " << cValue;
    }
} 

int main()
{
    char ch = '\0';

    cout << "Enter the character : ";
    cin >> ch;

    DispayConvert(ch);

    return 0;
}