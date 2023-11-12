/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int pivot(int a[],int n){
    int s=0,e=n-1;
    int mid;
    mid=(s+e)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int main()
{
    int a[]={30,40,50,60,3};
    int n=sizeof(a)/sizeof(a[0]);
    int k=pivot(a,n);
    cout<<"the pivot element is"<<" "<<k<<endl;

    return 0;
}
