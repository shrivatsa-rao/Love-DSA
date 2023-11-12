/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

double temp(int k,int p,int n ){
    double f=1;
    double ans=k;
    for(int i=0;i<p;i++)
    {
        f=f/10;
        for(double j=k;j*j<n;j=j+f){
            ans=j;
        }
    }
    
    return ans;
}

int sqt(int n){
    int s=0;int e=n,ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        int sq=mid*mid;
        if(sq==n){
            return mid;
        }
        
        if(sq<n){
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
   int n=37;
   int k=sqt(n);
   double m=temp(k,3,n);
   cout<<"the square root of a number is"<<m<<endl;

    return 0;
}
