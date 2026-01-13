/////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumEven
// Input         : Integer array, size of array
// Output        : Returns sum of all even elements
// Description   : Calculates and returns the sum of even numbers in the array
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////


template<class T>
T SumEven(T *Arr,int iSize)
{
    int iCnt=0;
    T Sum;
     
    for(iCnt=1,Sum=Arr[0];iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            Sum=Sum+Arr[iCnt];
        }  
    }
    return Sum;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : None (accepts array elements from user)
// Output        : Displays sum of even and odd elements
// Description   : Accepts array from user and calls SumEven and SumOdd functions
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int iCnt=0;
    int iSize=0;
    T Ans;
    
    cout<<"Enter the number of elements in the array : \n";
    cin>>iSize;
    
    T *Arr=new T[iSize];
    
    cout<<"Enter the values : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
        
    Ans=SumEven(Arr,iSize);
    cout<<"The sum of all even elements is :"<<Ans<<"\n";

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
