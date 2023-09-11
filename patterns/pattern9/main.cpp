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
        for(int j=0;j<2*n-i-2;j++)
        {
            cout<< "*";
        }
        for(int k=0;k<2*i+1;k++)
        {
            if(k%2==0)
            {
                cout<<i+1;
            }
            else
            {
                cout<< "*";
            }
        }
        for(int j=0;j<2*n-i-2;j++)
        {   
            cout<< "*";
        }
        
        cout<<endl;
    }

    return 0;
}
