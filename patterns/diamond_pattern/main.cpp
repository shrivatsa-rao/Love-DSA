/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<< " ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }
    
    
  

    return 0;
}

