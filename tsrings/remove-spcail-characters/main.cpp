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
        char c=s[i];
        if(s[i]=='@'){
            s[i]=' ';
        }
        
        i++;
    }
    
    cout<<s;
}

int main()
{
    char ch[]={'m','y','@','i'};
    fun(ch);

    return 0;
}
