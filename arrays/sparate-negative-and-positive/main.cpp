/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[]={23,-7,12,-10,-11,40,60};
    int i,j;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
