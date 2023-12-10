#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x1,x2,x;
    cin>>n>>m;

    x1 = n-1;
    x2 = m-1;

    x = n + (x1/x2);

    cout<<x;

    return 0;
}
