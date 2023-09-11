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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            sum=sum+1;
            cout<<sum;
        }
        cout<<endl;
    }

    return 0;
}
