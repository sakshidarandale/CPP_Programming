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
// Date         :  11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
void Reverse(T *Arr, int iSize)
{
    int iStart=0;
    int iEnd=iSize-1;
    T temp;
    
    while(iStart<iEnd)
    {
        temp=Arr[iStart];
        Arr[iStart]=Arr[iEnd];
        Arr[iEnd]=temp;
        
        iStart++;
        iEnd--;
    }

}

/////////////////////////////////////////////////////////////////////////////////
//  
// Function Name :  MainX
// Input        :  Nothing
// Output       :  Displays position of element or "Element not found"
// Description  :  Handles input of array and element, calls Reverse function
// Author       :  Sakshi Ravindra Darandale
// Date         :  11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////
template<class T>
void MainX()
{
    int iRet=0;
    int iCnt=0;
    
    int iSize=0;
    
    cout<<"Enter the number of elements in the array : \n";
    
    cin>>iSize;
    
    T *Arr=new T[iSize];
    
    cout<<"Enter the values : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    Reverse(Arr,iSize);

    cout << "Reversed array is : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << " ";
    }
    cout << "\n";

    delete [] Arr;
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
