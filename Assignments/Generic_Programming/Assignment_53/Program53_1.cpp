#include <iostream>
using namespace std;

template <class T>
class Array
{
    private:
        T *Arr = NULL;
        int iSize = 0;

    public:
    
        Array(int iValue)
        {
            iSize = iValue;
            Arr = new T[iSize];
        }

        ~Array()
        {
            delete[] Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter the elements:\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << "\t";
            }

            cout << "\n";
        }

        void CopyArray(Array<T> &Dest)
        {
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                Dest.Arr[iCnt] = Arr[iCnt];
            }
        }
};

int main()
{
    int iValue = 0;

    cout << "Enter number of elements that you want to Enter : \n"; 
    cin >> iValue;

    Array<int> aobj1(iValue);
    Array<int> aobj2(iValue);

    aobj1.Accept();
    aobj1.CopyArray(aobj2);

    cout << "Source Array elements are:\n";
    aobj1.Display();

    cout << "Destination Array elements are:\n";
    aobj2.Display();

    return 0;
}
