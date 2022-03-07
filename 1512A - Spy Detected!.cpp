#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,i;
    cin>>t;

    while(t--)
    {
        cin>>n;

    vector<int>v(n);

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int>a = v;

    sort(a.begin(),a.end());

    for(i=0; i<n; i++)
    {
        if(v[i]!=a[1])
        {
            cout<<i+1<<endl;
        }
    }

    }



    return 0;
}
