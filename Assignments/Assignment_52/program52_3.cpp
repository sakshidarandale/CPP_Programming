////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : AddN
// Input         : Array of any data type, size of array
// Output        : Returns addition of all elements
// Description   : Accepts N elements from array and returns their sum
// Author        : Sakshi Ravindra Darandale
// Date          : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
T AddN(T *Arr,int iSize)
{
   T Sum;
   int iCnt=0;

   for(iCnt = 1, Sum = Arr[0]; iCnt < iSize; iCnt++)
   {
      Sum=Sum+Arr[iCnt];
   }

   return Sum; 
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : None
// Output        : Displays addition of array elements
// Description   : Accepts array from user and calls AddN function
// Author        : Sakshi Ravindra Darandale
// Date          : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
   T iSize=0;
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
   
   Ans=AddN(Arr,iSize);
    
   cout<<"Addition is : "<<Ans<<"\n";
    
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
