/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=4,s=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<2*i+1;j++)
       {
           if(j%2==0){
               s=s+1;
               cout<<s;
           }
           else
           {
               cout<< "*";
           }
       }
       cout<<endl;
   }
   
 
   for(int i=0;i<n;i++)
   {
        s=0; 
        int k=(2*n-2*i-2),j;
       for( j=0;j<(2*n-2*i-1);j++)
       {
           if(j%2==0){
              
               k=k+1;
               cout<<k;
           }
           else
           {
               cout<< "*";
           }
       }
       cout<<endl;
   }

    return 0;
}
