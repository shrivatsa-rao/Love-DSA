/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=4;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<2*i+1;j++)
       {
           if(j%2==0){
               cout<<i+1;
           }
           else
           {
               cout<<"*";
           }
       }
       cout<<endl;
   }

    return 0;
}
