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
        int s=0;
        for(int j=0;j<i+1;j++)
        {
            if(j==0)
            {
                cout<< "*";
            }
            else
            {
                s=s+1;
                cout<<s;
            }
        }
        
        for(int k=s;k>=1;)
        {
            k=k-1;
            if(k==0){
                cout<< "*";
            }
            else
            {
                cout<<k;
            }
        }
        cout<<endl;
    }
    
    int a=n-1;
    for(int i=0;i<a;i++)
    {
        int f=0;
        for(int j=0;j<a-i;j++)
        {
            if(j==0)
            {
                cout<< "*";
            }
            else
            {
                f=f+1;
                cout<<f;
            }
            
        }
        
        for(int h=f;h>=1;){
            h=h-1;
            if(h==0){
                cout<< "*";
            }else
            {
                cout<<h;
            }
        }
        
        
        cout<<endl;
    }

    return 0;
}
