////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckSorted
// Input         : Array of any data type and size of array
// Output        : Returns true if array is sorted, otherwise returns false
// Description   : Checks whether the given array is sorted in ascending order
// Author        : Sakshi Ravindra Darandale
// Date          : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
bool CheckSorted(T *Arr,int iSize)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>Arr[iCnt+1])
       {
           return false;
       }   
    }
    return true;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : Accepts size of array and array elements from user
// Output        : Displays whether the array is sorted or not
// Description   : Accepts array input, calls CheckSorted function,
//                 and displays the result
// Author        : Sakshi Ravindra Darandale
// Date          : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
bool MainX()
{
    int iCnt=0;
    bool bRet=0;
    int iSize=0;
    
    cout<<"Enter the number of elements in the array : \n";
    cin>>iSize;
    
    T *Arr=new T[iSize];
   
    cout<<"Enter the values : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    bRet=CheckSorted(Arr,iSize);

   if(bRet==true)
   {
    cout<<"Array is sorted \n";
   }
   else
   {
    cout<<"Array is not sorted \n";
   }

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
