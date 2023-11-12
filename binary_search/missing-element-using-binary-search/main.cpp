/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int miss(int a[],int n){
    int s=0,e=n-1,mid,ans=-1,diff;
    mid=(s+e)/2;
    while(s<=e){
        diff=a[mid]-mid;
        if(diff==1){
            s=mid+1;
            
        }
        else
        {
            ans=mid;
            e=mid-1;
        }
        mid=(s+e)/2;
        
    }
    return ans+1;
}

int main()
{
   int a[]={1,3,4,5,6,7,8};
   int n=sizeof(a)/sizeof(a[0]);
   int k=miss(a,n);
   cout<<"the missing element is" << k<<endl;
    return 0;
}
