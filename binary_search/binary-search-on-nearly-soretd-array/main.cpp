/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int near(int a[],int n,int t){
    int s=0;int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(a[mid]==t){
            return 1;
        }
        
        if(a[mid-1]==t){
            return 1;
        }
       
        if(a[mid+1]==t){
            return 1;
        }
        
        if(a[mid]<t){
            s=mid+2;
        }
        else
        {
            e=mid-2;
        }
        
        mid=(s+e)/2;
    }
    
    return -1;
}

int main()
{
   int a[]={10, 3, 40, 20, 50, 80, 70};
   int t=10;
   int n=sizeof(a)/sizeof(a[0]);
   int k=near(a,n,t);
   if(k>0){
       cout<<"found\n";
   }
   else
   {
       cout<<"not\n";
   }

    return 0;
}
