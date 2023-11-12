/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fun(int a[],int n,int k){
    int s=0,e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        
        if(s==e){
            return s;
        }
        
        
        if(mid%2==1){
            if(a[mid]==a[mid-1]){
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        else
        {
            if(a[mid]==a[mid+1]){
                s=mid+2;
            }else
            {
                e=mid;
            }
        }
        
        mid=(s+e)/2;
    }
    
    return -1;
}

int main()
{
    int a[]={10,10,2,2,3,3,5,5,6,6,7,7,10};
    int n=sizeof(a)/sizeof(a[0]);
    int k=10;
    int h=fun(a,n,k);
    cout<<h<<"position"<< " " <<a[h]<<endl;

    return 0;
}
