/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={{1,2,3},{4,5,6}};
    int i,j;
    for(i=0;i<3;i++)
    {
        int s=0;
        for(j=0;j<3;j++)
        {
            s=s+a[i][j];
            
        }
        if(i==3 ){
             
             break;
        }
        else
        {
              cout<<s<<endl;
        }
       
    }

    return 0;
}
