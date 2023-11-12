/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


//twwo sum problem
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool fun(int a[],int n,int x){
	    sort(a,a+n);
	    int l=0,r=n-1;
	    while(l<r){
	        
	        if(a[l]+a[r]==x){
	            return true;
	        }
	        else
	        if(a[l]+a[r]<x){
	            l++;
	        }
	        else
	        {
	            r--;
	        }
	    }
	    return false;
	}
	
	bool hasArrayTwoCandidates(int a[], int n, int x) {
	    // code here
	    
	    bool j=fun(a,n,x);
	    return j;
	}
};

