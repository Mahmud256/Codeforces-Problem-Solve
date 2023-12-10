#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(3);
     for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

        int s = v[2]-v[1];
        int t = v[1]-v[0];
        cout<<s+t;

    return 0;
}
