#include<iostream>
using namespace std;

bool ChkVowel(char CValue)
{
    if (CValue == 'A' || CValue == 'E' || CValue == 'I' ||
        CValue == 'O' || CValue == 'U' ||

        CValue == 'a' || CValue == 'e' || CValue == 'i' ||
        CValue == 'o' || CValue == 'u')
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
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter character : ";
    cin >> cValue;

    bRet = ChkVowel(cValue);

    if (bRet == true)
    {
        cout << "It is Vowel\n";
    }
    else
    {
        cout << "It is Not Vowel\n";
    }

    return 0;
} 