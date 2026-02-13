//Input : 4
//Output : 4+3+2+1 = 10

#include <iostream>
using namespace std;

int iFact = 1;    //using Global Variable (extern storage class)

void Factorial(int iNo)
{
  
    if(iNo>=1)
    {
      iFact = iFact * iNo;

      Factorial(--iNo);     //Pre Decrement
    }
    
}

int main()
{
    
    Factorial(4);

    cout<<iFact<<"\n";
    
    return 0;
}

