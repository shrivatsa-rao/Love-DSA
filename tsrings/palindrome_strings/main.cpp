/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   char ch[10];
   int n;
   cin.getline(ch,10);
   for( n=0;ch[n]!='\0';n++){
       
   }
  
   int i=0;
   int j=n-1;
   while(i<=j){
       if(ch[i]==ch[j]){
           i++;
           j--;
       }
       else
       {
           cout<<"not";
           break;
       }
       
   }
   
   cout<<"true";

    return 0;
}
