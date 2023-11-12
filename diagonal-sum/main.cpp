/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int n=3;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i][i];
        
    }
    cout<<sum;

    return 0;
}
