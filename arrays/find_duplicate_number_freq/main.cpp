/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int dup(int a[],int n){
    int freq[10]={0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(freq[a[i]]>1){
            return a[i];
        }
    }
    
    return -1;
}

int main()
{
    int a[]={3,1,5,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    int k=dup(a,n);
    cout<<k<<endl;

    return 0;
}
