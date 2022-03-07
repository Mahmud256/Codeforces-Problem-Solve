#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, m, ans, count=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        vector<int>v;

       cin>>m;
       if(m%10!=0)
       {
           v.push_back(m%10);
       }
       ans = m%10;
       m = m-ans;

       if(m%100!=0)
       {
           v.push_back(m%100);
       }
       ans = m%100;
       m = m-ans;

       if(m%1000!=0)
       {
           v.push_back(m%1000);
       }
       ans = m%1000;
       m = m-ans;

       if(m%10000!=0)
       {
           v.push_back(m%10000);
       }

       if(m>=10000 && m%10000==0)
       {
           v.push_back(m);
       }

       cout<<v.size()<<endl;

       for(int i=0; i<v.size(); i++)
       {
           cout<<v[i]<<" ";
       }

    }


    return 0;
}
