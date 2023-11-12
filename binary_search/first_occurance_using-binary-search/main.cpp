/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int first(int a[],int n,int t){
    int l=0;
    int h=n-1;
    int ans=-1;
    int mid=(l+h)/2;
    while(l<=mid){
        if(a[mid]==t){
            ans=mid;
            h=mid-1;
            
        }
        else
        if(a[mid]<t){
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
        mid=(l+h)/2;
    }
    
    return ans;
}

int main()
{
    int a[]={10,20,30,40,30,40,50};
    int t=40;
    int n=sizeof(a)/sizeof(a[0]);
    int k=first(a,n,t);
    cout<<"the first occurance is at"<<k<<endl;

    return 0;
}
