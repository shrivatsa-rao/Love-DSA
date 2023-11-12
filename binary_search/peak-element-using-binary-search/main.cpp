/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int peak(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(a[mid]<a[mid+1]){
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
    int a[]={10,20,30,90,70,60,50};
    int n=sizeof(a)/sizeof(a[0]);
    int k=peak(a,n);
    cout<<"the peak element is"<<k<<endl;

    return 0;
}
