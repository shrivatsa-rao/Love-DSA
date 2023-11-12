/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int last(int a[],int t,int n){
    int l=0;int h=n-1,ans=-1;
    int mid=(l+h)/2;
    while(l<=h){
        if(a[mid]==t){
            ans=mid;
            l=mid+1;
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
    int a[]={10,20,30,30,30,30,30,30,30,40};
    int t=30;
    int n=sizeof(a)/sizeof(a[0]);
    int k=last(a,t,n);
    cout<<"the last occurance is at"<<k<<endl;

    return 0;
}
