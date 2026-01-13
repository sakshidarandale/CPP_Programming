////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//  
// Function Name :  SearchLast
// Input        :  Array of any data type, size of array, element to search
// Output       :  Returns position of last occurrence of element or -1 if not found
// Description  :  Searches for the last occurrence of a given element in the array
// Author       :  Sakshi Ravindra Darandale
// Date         :  11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
int SearchLast(T *Arr, int iSize, T iNo)
{
    int iPos=1;
    int iCnt=0;
    int iLastPos=-1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLastPos=iPos;
        } 
        iPos++;
    }
    return iLastPos;
}

/////////////////////////////////////////////////////////////////////////////////
//  
// Function Name :  MainX
// Input        :  Nothing
// Output       :  Displays position of element or "Element not found"
// Description  :  Handles input of array and element, calls SearchLast function
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
    T iNo;
    
    cout<<"Enter the number of elements in the array : \n";
    
    cin>>iSize;
    
    T *Arr=new T[iSize];
    
    cout<<"Enter the values : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    cout<<"Enter the element that you want to search : \n";
    cin>>iNo;
    
    iRet=SearchLast(Arr,iSize,iNo);
    
    if(iRet==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Position is : "<<iRet<<"\n";
    }
    
    delete [] Arr;
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
