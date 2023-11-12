/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[4][4]={{1,0,0,1},{1,1,1,1},{0,1,1,0},{1,1,1,0}};
    int m=sizeof(a),maxi=-1,k,row;
    int n=sizeof(a[0]);
    for(int i=0;i<4;i++)
    {
         row=0;
        for(int j=0;j<4;j++){
            if(a[i][j]==1){
                row++;
            }
        }
        
        if(maxi<row){
            maxi=row;
            k=i;
        }
    }
    
    cout<<maxi;
    cout<<k<<endl;

    return 0;
}
