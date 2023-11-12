/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int fun(string s,int n,int i,char t){
    if(i>=n){
        return 0;
    }
    
    if(s[i]==t){
        return i;
    }
    
    fun(s,n,i+1,t);
}

int main()
{
    string s="hello";
    int n=s.length();
    int i=0;
    char t='o';
    int k=fun(s,n,i,t);
    if(k){
        cout<<*k;
    }
    else
    {
        cout<<"not";
    }

    return 0;
}
