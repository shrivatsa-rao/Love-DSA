/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//sort 1 and 0 and 2.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={1,0,2,2,1,0,1,0};
    int n=sizeof(a)/sizeof(a[0]);
    int l=0,r=n-1,i=0;
    while(i<=r){
        if(a[i]==0){
            swap(a[i],a[l]);
            i++;
            l++;
        }
        else if(a[i]==2){
            swap(a[i],a[r]);
            r--;
        }
        else
        {
            i++;
        }
    }
    
    for(int j=0;j<n;j++)
    {
        cout<<a[j];
    }

    return 0;
}
