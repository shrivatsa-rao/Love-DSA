/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void fun(int a[],int n,int i,int &max){
    if(i>=n){
        return ;
    }
    
    if(a[i]>max){
        max=a[i];
    }
    
    fun(a,n,i+1,max);
}

int main()
{
   int a[]={1,2,3,4};
   int n=4,i=0,max=-1;
   fun(a,n,i,max);
   cout<<max;

    return 0;
}
