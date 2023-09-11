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
        char ch;
        for(int j=0;j<i+1;j++)
        {
           ch=j+'A'+1-1;
            cout<<ch;
        }
        
        for(char k=ch;k>'A';)
        {
            k=k-1;
            cout<<k;
        }
        cout<<endl;
       
       
       
    }

    return 0;
}
