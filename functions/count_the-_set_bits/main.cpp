/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int c=0;
   int n=15;
   while(n>0){
       int k=n%2;
       if(k==1){
           c++;
       }
       n=n/2;
   }
   
   cout<<c;

    return 0;
}
