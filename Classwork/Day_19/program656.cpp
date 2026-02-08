//Input 3
//Output : 3 2 1

#include <iostream>
using namespace std;

void Display(int iNo)
{
  
    if(iNo>=1)
    {
        cout<<iNo<<"\n";
        iNo--;

        Display(iNo);
    }
    
}

int main()
{
    Display(3);

    return 0;
}

