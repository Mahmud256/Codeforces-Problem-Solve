#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,b=0;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        bool flag=true;

        for(i=1; i<n; i++)
        {
            if(a[i]-a[i-1]>1)
            {
                flag=false;
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
