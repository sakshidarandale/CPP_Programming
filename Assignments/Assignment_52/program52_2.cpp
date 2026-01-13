////////////////////////////////////////////////////////////////////////////////
//      Required Header Files
/////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Max
// Input        : Three values of same data type 
// Output       : Returns the maximum value among the three inputs
// Description  : Accepts three values and return the maximum value.
// Author       : Sakshi Ravindra Darandale
// Date         : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T no1,T no2,T no3)
{
   T Ans;
   
   if((no1>no2)&&(no1>no3))
   {
      Ans=no1;
   }
   else if((no2>no1) && (no2>no3))
   {
      Ans=no2;
   }
   else
   {
      Ans=no3;
   }
   
   return Ans; 
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MainX
// Input        : Nothing
// Output       : Displays maximum value among three numbers.
// Description  : Accepts three numbers from user and calls Max function.
// Author       : Sakshi Ravindra Darandale
// Date         : 11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////

template<class T>
void MainX()
{
    T Value1=0;
    T Value2=0;
    T Value3=0;
    
    cout<<"Enter the first number : ";
    cin>>Value1;
    
    cout<<"Enter the second number : ";
    cin>>Value2;
    
     cout<<"Enter the third number : ";
    cin>>Value3;

    T Ans=Max(Value1,Value2,Value3);
    
    cout<<"Maximum number is : "<<Ans<<"\n";
    
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
