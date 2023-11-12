/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//set the kth bit
#include <iostream>

using namespace std;

int main()
{
   int n=10;
   int k=2;
   int mask=1<<k;
   int ans=mask | n;
   cout<<ans;
   

    return 0;
}
