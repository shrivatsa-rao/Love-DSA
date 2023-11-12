/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//count the set bits
#include <iostream>

using namespace std;

int main()
{
    int a[10],i;
    int n=15;
    for( i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
        
    }
    
    for(int j=i-1;j>=0;j--){
        cout<<a[j];
    }
    return 0;
}
