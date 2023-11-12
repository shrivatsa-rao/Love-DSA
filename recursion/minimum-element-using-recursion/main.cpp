/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void fun(int a[],int n,int i,int &min){
    if(i>=n){
        return;
    }
    
    if(a[i]<min){
        min=a[i];
    }
    
    fun(a,n,i+1,min);
}

int main()
{
    int a[]={1,2,3,10};
    int n=4,i=0,min=10000;
    fun(a,n,i,min);
    cout<<"the mininum element is"<<min;

    return 0;
}
