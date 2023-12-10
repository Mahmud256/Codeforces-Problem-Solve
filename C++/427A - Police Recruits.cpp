#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, fcr=0, count=0;
    cin>>n;

    vector<int>v(n);

    for(i=0; i<v.size(); i++)
    {
        cin>>v[i];

        if(v[i]==-1)
        {
            if(fcr>0)
            {
                fcr--;
            }
            else
            {
                count++;
            }

        }
        else
        {
            fcr+= v[i];
        }
    }
    cout<<count;


    return 0;
}
