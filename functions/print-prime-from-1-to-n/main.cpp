/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool isprime(int n){
    
    if(n==1 || n==0){
        return false;
    }
    for(int j=2;j<n;j++)
    {
        if(n%j==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int m=10;
    for(int i=1;i<=m;i++)
    {
        if(isprime(i)){
            cout<<i;
        }
        
    }

    return 0;
}
