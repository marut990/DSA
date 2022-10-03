#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    queue<int>q1;

    q1.push(25);
    q1.push(838);
    q1.pop();
    q1.pop();
    q1.push(43565);
    while (!q1.empty())
    {
        cout<<q1.front();
         q1.pop();
    }
}