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
    
    //Step 1: Allocate the memory
    ArrayX *aobj=new ArrayX(10);   //dynamic
    
    //Strp 2:Use the memory
    
    //Step 3: Deallocate the memory
    delete aobj;
    
    return 0;
}