#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    /*
    int t;
    cin>>t;
    vector <int>num(t);
    
    for (int i = 0; i <=t; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i <=t; i++)
    {
        cout<<num[i];
    }
    */
 /*
   vector<int>v;
   v.push_back(7989);
   v.push_back(7884789);

   for (int i = 0; i < v.size(); i++)
   {
            
       cout<<v[i]<<endl;

   }
       */  
    
        //by using ierator:---------
         
        vector<int>v;

        vector<int>::iterator it;

        for (it = v.begin(); it!=v.end(); it++)
        {
            cout<<*it<<endl;
        }
        

    
}