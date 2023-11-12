/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int pivot(int a[],int n)
{
    int lsum[10]={0};
    int rsum[10]={0};
    for(int i=1;i<n;i++)
    {
        lsum[i]=lsum[i-1]+a[i-1];
    }
    
    for(int i=n-2;i>=0;i--){
        rsum[i]=rsum[i+1]+a[i+1];
    }
    
    for(int i=0;i<n;i++)
    {
        if(rsum[i]==lsum[i]){
           return i;
        }
    }
    return -1;
}

int main()
{
   int a[]={1,2,3};
   int n=sizeof(a)/sizeof(a[0]);
   int k=pivot(a,n);
   cout<<k<<endl;

    return 0;
}
