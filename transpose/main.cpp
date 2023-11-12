/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int m=3,n=3;
   for(int i=0;i<m;i++){
       for(int j=i;j<n;j++)
       {
           swap(a[i][j],a[j][i]);
           
           
           
       }
   }
   
   for(int i=0;i<3;i++)
   {
       
       for(int j=0;j<3;j++)
       {
           cout<<a[i][j];
       }
       cout<<endl;
   }
   

    return 0;
}

