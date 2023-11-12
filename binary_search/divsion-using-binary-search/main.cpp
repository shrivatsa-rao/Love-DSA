/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int mon(int d,int divs){
    int s=0,ans=-1;
    int e=d;
    int mid=(s+e)/2;
    while(s<=e){
        if(mid*divs==d){
            return mid;
        }
        
        if(mid*divs<d){
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        
        mid=(s+e)/2;
    }
    
    return ans;
    
}

int main()
{
   int d=28;
   int divs=-7;
   int k=mon(abs(d),abs(divs));
   if(((d<0)&&(divs>0)) || ((d>0)&&(divs<0))){
       k=0-k;
   }
   cout<<k;

    return 0;
}
