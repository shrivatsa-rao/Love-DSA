/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//linaer search

#include <iostream>

using namespace std;
bool sea(int a[],int n,int i,int t){
    if(i>=n){
        return false;
    }
    
    if(a[i]==t){
        return true;
    }
    bool k=sea(a,n,i+1,t);
    return k;
}

int main()
{
    int a[]={1,2,3,4};
    int n=4,t=100,i=0;
    bool g=sea(a,n,i,t);
    if(g){
        cout<<"element found";
    }
    else
    {
        cout<<"not";
    }

    return 0;
}
