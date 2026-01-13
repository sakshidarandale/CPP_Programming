/////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Min
// Input         : Array of any data type, size of array
// Output        : Returns the smallest element from the array
// Description   : Iterates through the array and finds the minimum element
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
T Min(T *Arr,int iSize)
{
    int iCnt=0;
    T Min;
     
    for(iCnt=1,Min=Arr[0];iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min=Arr[iCnt];
        }  
    }
    return Min;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : None 
// Output        : Displays minimum element from the array
// Description   : Accepts array from user and calls Min function
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
        
    Ans=Min(Arr,iSize);
    cout<<"The smallest element in array is :"<<Ans<<"\n";

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
