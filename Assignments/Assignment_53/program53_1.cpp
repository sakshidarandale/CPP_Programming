////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//  
// Function Name :  Reverse
// Input        :  Array of any data type, size of array, element to search
// Output       :  Reversed array
// Description  :  Reverses the contents of the array
// Author       :  Sakshi Ravindra Darandale
// Date         :  12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
void CopyArray(T *src,T *dest , int iSize)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        dest[iCnt]=src[iCnt];
    }
}

/////////////////////////////////////////////////////////////////////////////////
//  
// Function Name :  MainX
// Input        :  Nothing
// Output       :  Displays position of element or "Element not found"
// Description  :  Handles input of array and element, calls Reverse function
// Author       :  Sakshi Ravindra Darandale
// Date         :  12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////
template<class T>
void MainX()
{
    int iCnt=0;
    
    int iSize=0;
    
    cout<<"Enter the number of elements in the array : \n";
    cin>>iSize;
    
    T *Arr=new T[iSize];
    T *Brr=new T[iSize];
    
    cout<<"Enter the values : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    CopyArray(Arr,Brr,iSize);

    cout << "Copied array is : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Brr[iCnt] <<"\t";
    }
    cout << "\n";

    delete [] Arr;
    delete [] Brr;
}

/////////////////////////////////////////////////////////////////////////////////
//      Entry of main function
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    MainX<int>(); 

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
//      End of main function
/////////////////////////////////////////////////////////////////////////////////
