#include<bits/stdc++.h>
using namespace std;


bool issafe(int a[][4],vector<vector<bool>>&visited,int m,int n,int sx,int sy,int nx,int ny){
    if((nx>=0 && nx<m)&&(ny>=0 && ny<n)&& a[nx][ny]==1 && visited[nx][ny]==false) {
        return true;
    }
    else
    {
        return false;
    }

}



void print(int a[][4],vector<vector<bool>> &visited,string &output,int m,int n,int sx,int sy){
    if(sx==m-1 && sy==n-1){
        cout<<output<<endl;
        return;
    }

    
    //up
    int nx=sx-1;
    int ny=sy;
    if(issafe(a,visited,m,n,sx,sy,nx,ny)){
        visited[nx][ny]=true;
        output.push_back('u');
        print(a,visited,output,m,n,nx,ny);
        output.pop_back();
        visited[nx][ny]=false;

    }

    //right
    nx=sx;
    ny=sy+1;
    if(issafe(a,visited,m,n,sx,sy,nx,ny)){
        visited[nx][ny]=true;
        output.push_back('r');
        print(a,visited,output,m,n,nx,ny);
        output.pop_back();
        visited[nx][ny]=false;

    


    }

    //down
    nx=sx+1;
    ny=sy;

     if(issafe(a,visited,m,n,sx,sy,nx,ny)){
        visited[nx][ny]=true;
        output.push_back('d');
        print(a,visited,output,m,n,nx,ny);
        output.pop_back();
        visited[nx][ny]=false;

        }
    //left

    nx=sx;
    ny=sy-1;
     if(issafe(a,visited,m,n,sx,sy,nx,ny)){
        visited[nx][ny]=true;
        output.push_back('l');
        print(a,visited,output,m,n,nx,ny);
        output.pop_back();
        visited[nx][ny]=false;

        }


    


}



int main(){
    int a[4][4]={
        {1,0,0,0},
	{1,1,0,0},
	{1,1,1,0},
	{1,1,1,1}};
    int m=4,n=4;
    int sx=0,sy=0;
    string output="";
    vector<vector<bool>>visited(m,vector<bool>(n,false));
    if(a[0][0]==0){
        cout<<"path does not exist";
    }
    else
    {
        visited[sx][sy]=true;
        print(a,visited,output,m,n,sx,sy);
    }
}
