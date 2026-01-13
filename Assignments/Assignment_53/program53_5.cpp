/////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Replace
// Input         : Array of any data type, size of array, old value, new value
// Output        : Modifies array by replacing old value with new value
// Description   : Replaces all occurrences of oldVal in the array with newVal
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
////////////////////////////////////////////////////////////////////////////////

template<class T>
void Replace(T *Arr,int iSize,T oldVal,T newVal)
{
    int iCnt=0;
 
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==oldVal)
        {
            Arr[iCnt]=newVal;
        }
        
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : Accepts size of array and array elements from user
// Output        : Displays array after replacing old value with new value
// Description   : Handles input of array, old value, new value, and calls Replace
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
////////////////////////////////////////////////////////////////////////////////
template<class T>
void MainX()
{
    int iCnt=0;
    int iSize=0;
    T Ans;
    T oldVal;
    T newVal;
    
    cout<<"Enter the number of elements in the array : \n";
    cin>>iSize;
    
    T *Arr=new T[iSize];
    
    cout<<"Enter the values : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    cout<<"Enter the value to replace :";
    cin>>oldVal;
    
    cout<<"Enter the new value:";
    cin>>newVal;
    
    Replace(Arr,iSize,oldVal,newVal);

    cout << "Array after replacement : \n";
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
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
