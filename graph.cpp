#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{               
              //graph is just like matrix in which we covering direct edge from vertices to vertices then put 1.


    int n,m;
    cin>>n>>m;
    
    int adjmat[n+1][n+1];

    for (int  i = 0; i < m; i++)
    {
        int u,v;

        cin>>u>>v;
        adjmat [u][v]=1;
        adjmat [v][u]=1;
    }
        
}