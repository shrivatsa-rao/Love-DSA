/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=6;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n-i;j++)
       {
           if(i==0 || i==n-1){
               cout<< "*";
           }
           else{
               if(j==0 || j==n-i-1){
                   cout<< "*";
               }
               else
               {
                   cout<<" ";
               }
           }
       }
       cout<<endl;
   }

    return 0;
}
