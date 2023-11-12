/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int i,j;

void san(int a[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
}


void mat(int a[][3],int m,int n){
    for( i=0;i<m;i++)
    {
        for( j=i;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
            
        }
    }
    
    for( i=0;i<n;i++)
    {
        san(a[i],n);
    }
    
   
}


int main()
{
   int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
   int m=3,n=3;
   mat(a,m,n);
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++){
            cout<<a[i][j]; 
            }
    }

    return 0;
}
