/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n=1101,sum=0,i=0;
   while(n>0){
       int k=n%10;
       sum=sum+k*pow(2,i);
       n=n/10;
       i++;
   }
   cout<<sum;

    return 0;
}
