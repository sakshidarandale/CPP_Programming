/////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Frequency
// Input        :  Array of any data type, size of array, element to count
// Output       :  Returns the count of specified element in the array
// Description  :  Counts how many times a given element occurs in the array
// Author       :  Sakshi Ravindra Darandale
// Date         :  11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////
template<class T>
int Frequency(T Arr[], int iSize, T iNo)
{
    int iCount = 0;
    int iCnt = 0

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MainX
// Input        :  None
// Output       :  Displays count of the specified element in the array
// Description  :  Accepts array and element from user, calls Frequency function
// Author       :  Sakshi Ravindra Darandale
// Date         :  11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////
template<class T>
void MainX()
{
    int iSize = 0;
    int iRet = 0;
    T iNo;

    cout << "Enter number of elements: ";
    cin >> iSize;

    T *Arr = new T[iSize];

    cout << "Enter the values:\n";
    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }

    cout << "Enter the element you want to count: ";
    cin >> iNo;

    iRet = Frequency(Arr, iSize, iNo);
    cout << "Count is: " << iRet << "\n";

    delete[] Arr;  
}

/////////////////////////////////////////////////////////////////////////////////
//      Entry of main function
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    MainX<char>(); 

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
//      End of main function
/////////////////////////////////////////////////////////////////////////////////