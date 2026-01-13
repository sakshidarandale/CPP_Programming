/////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Max
// Input         : Four values of same data type
// Output        : Returns the maximum value among the four
// Description   : Finds the maximum by comparing all four values
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T a,T b,T c,T d)
{
    T max=a;

   if(b>max)
   max=b;
   
   if(c>max)
   max=c;
   
   if(d>max)
   max=d;
   
   return max;
   
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input         : None
// Output        : Displays maximum of four numbers
// Description   : Accepts four values from user and calls Max function
// Author        : Sakshi Ravindra Darandale
// Date          : 12/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    T Ret;
    T Value1=0;
    T Value2=0;
    T Value3=0;
    T Value4=0;
    
    cout<<"Enter the first number:\n";
    cin>>Value1;
    
    cout<<"Enter the second number:\n";
    cin>>Value2;
    
    cout<<"Enter the third number:\n";
    cin>>Value3;
    
    cout<<"Enter the fourth number:\n";
    cin>>Value4;
    
    Ret=Max(Value1,Value2,Value3,Value4);
    
    cout<<"The Maximum is :"<<Ret<<"\n";

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
