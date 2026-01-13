////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SecondMin
// Input         : Array of any data type and size of array
// Output        : Returns second smallest element of the array
// Description   : Finds and returns the second minimum element from the given array
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
T SecondMin(T *Arr,int iSize)
{
    int iCnt=0;
    T Min;
    T SecMin;
    
    if(Arr[0]<Arr[1])
    {
        Min=Arr[0];
        SecMin=Arr[1];
    }
    
    else
    {
        Min=Arr[1];
        SecMin=Arr[0];
    }
    for(iCnt=1;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]<Min)
       {
            SecMin=Min;
            Min=Arr[iCnt];
       }
       else if(Arr[iCnt]<SecMin &&Arr[iCnt]!=Min)
       {
            SecMin=Arr[iCnt];
       }
    }
    return SecMin;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : Accepts size of array and array elements from user
// Output        : Displays second smallest element of array
// Description   : Accepts array input, calls SecondMin function,
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

    Ans=SecondMin(Arr,iSize);

    cout << "Second smallest element in array is :" << Ans<<"\n";
    
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
