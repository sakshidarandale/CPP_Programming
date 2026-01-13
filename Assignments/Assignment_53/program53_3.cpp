////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SecondMax
// Input         : Array of any data type and size of array
// Output        : Returns second largest element of the array
// Description   : Finds and returns the second maximum element from the given array
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
T SecondMax(T *Arr,int iSize)
{
    int iCnt=0;
    T Max=Arr[0];
    T SecMax=Arr[0];
    
    for(iCnt=1;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>Max)
       {
            SecMax=Max;
            Max=Arr[iCnt];
       }
       else if(Arr[iCnt]>SecMax &&Arr[iCnt]!=Max)
       {
            SecMax=Arr[iCnt];
       }
    }
    return SecMax;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : Accepts size of array and array elements from user
// Output        : Displays second largest element of array
// Description   : Accepts array input, calls SecondMax function,
//                 and displays the result
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    int iCnt=0;
    T Ans;
    
    int iSize=0;
    
    cout<<"Enter the number of elements in the array : \n";
    cin>>iSize;
    
    T *Arr=new T[iSize];

    cout<<"Enter the values : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Ans=SecondMax(Arr,iSize);

    cout << "Second largest element in array is :" << Ans<<"\n";
    
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
