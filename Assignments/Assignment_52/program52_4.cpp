////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Max
// Input        : Pointer to array of same data type, Number of elements
// Output       : Returns the maximum value from the array
// Description  : Accepts an array of values and returns the maximum element.
// Author       : Sakshi Ravindra Darandale
// Date         : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T *Arr,int iSize)
{
   T Max=Arr[0];
   int iCnt=0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]>Max)
       {
            Max=Arr[iCnt];
       }
    }
    return Max; 
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input        : Number of elements and array values from user
// Output       : Displays the maximum value from the entered elements
// Description  : Accepts N elements from user and calls Max() to find
//                the largest element using 
// Author       : Sakshi Ravindra Darandale
// Date         : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////


template<class T>
void MainX()
{
   int iSize=0;
   T Ans;
   int iCnt=0;
    
   cout<<"Enter the number of elements : \n";
   cin>>iSize;
    
   T *Arr=new T[iSize];
    
   cout<<"Enter the values : \n";
    
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      cin>>Arr[iCnt];
   }
   
   Ans=Max(Arr,iSize);
    
   cout<<"Largest number is : "<<Ans<<"\n";
    
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
