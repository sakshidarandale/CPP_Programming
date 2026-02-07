#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr; 
        int iSize=0;
        
        ArrayX(int no)
        {
            cout<<"Inside Constructor\n";
            iSize=no;
            Arr=new int[iSize];
        }    
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete [] Arr;
        }  
};

int main()
{
    // ArrayX aobj(10);  //static
    
    ArrayX *aobj=new ArrayX(10);   //dynamic
    
    return 0;
}