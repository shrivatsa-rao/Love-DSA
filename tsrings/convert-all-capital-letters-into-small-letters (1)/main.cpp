/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void fun(char s[]){
    int i=0;
    while(s[i]!='\0'){
        char ch=s[i];
        if(ch>='A'&& ch<='Z'){
            s[i]=ch-'A'+'a';
        }
        i++;
    }
    
    cout<<s;
}

int main()
{
    char s[10]={'M','y','H','e','l','l','o'};
    fun(s);

    return 0;
}
