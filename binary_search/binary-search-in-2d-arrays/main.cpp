/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//binary search on 2d arrays
#include <iostream>

using namespace std;

int search(int a[][4],int m,int n,int t){
    int s=0;
    int e=m*n-1;
    int mid=(s+e)/2;
    while(s<=e){
        int el=a[mid/n][mid%n];
        if(el==t){
            return 1;
        }
        
        if(el<t){
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        
        mid=(s+e)/2;
    }
    
    return 0;
}

int main()
{
    int a[2][4]={{1,2,3,4},{7,8,9,10}};
    int m=2,n=4,t=2;
    int k=search(a,m,n,t);
    if(k==1){
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
   

    return 0;
}
