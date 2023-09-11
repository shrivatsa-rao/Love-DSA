/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=4,c=0;
    for(int i=0;i<n;i++)
    {
        c=c+1;
        for(int j=0;j<2*i+1;j++){
            if(j%2==1){
                cout<<"*";
            }
            else
            {
                cout<<c;
            }
        }
        cout<<endl;
    }
    
    int k=n-1;
    for(int i=0;i<k;i++)
    {
        c=c-1;
        for(int j=0;j<2*k-2*i-1;j++){
            if(j%2==1){
                cout<<"*";
            }
            else
            {
                cout<<c;
            }
        }
        cout<<endl;
    }

    return 0;
}
