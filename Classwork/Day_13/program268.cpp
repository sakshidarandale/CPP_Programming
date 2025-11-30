#include <iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
    int iCnt=0;
    int iSum=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}

    
int main()
{
    int Brr[]={10.1f,20.2f,30.3f,40.4f,50.5f};
    int iRet=0;
    
    iRet=Summation(Brr,5);
    
    cout<<"Summation is :"<<iRet<<"\n";
    
    return 0;
}
 
 