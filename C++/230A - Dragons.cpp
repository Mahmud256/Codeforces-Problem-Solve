#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i,count=0;
    cin>>s>>n;

    pair<int,int> a[10000];

    for(i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }

    sort(a,a+n);

    for(i=0; i<n; i++)
    {
        if(s<=a[i].first)
    {
        count++;
        break;
    }
    else
    {
        s = s+a[i].second;
    }
    }


    if(0<count)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}
