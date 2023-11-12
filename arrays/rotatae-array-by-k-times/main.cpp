/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int a[]={20,21,22,23,24,25};
  int temp[10]={0};
  int k=2;
  int n=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<k;i++)
  {
      temp[i]=a[i];
  }
  
  for(int i=0;i<n-k;i++)
  {
      a[i]=a[i+k];
  }
  int j=0;
  
  for(int i=n-k;i<n;i++)
  {
      a[i]=temp[j];
      j++;
  }
  
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }

    return 0;
}
