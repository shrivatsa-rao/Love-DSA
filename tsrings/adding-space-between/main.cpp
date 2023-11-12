/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char ch[20];
    char temp[20]="";
    cin.getline(ch,20);
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]!='@'){
            temp[i]=temp[i]+ch[i];
        }
        else
        {
            temp[i]=temp[i]+' ';
        }
        i++;
    }
cout<<temp;
    return 0;
}
