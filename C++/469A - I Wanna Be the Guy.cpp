#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,arr[200],m,n,i,count=0;
    cin>>l>>m;
    for(i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    cin>>n;
    for(i=m; i<m+n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(m+n));

    for(i=0; i<m+n; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }

    if(count==l)
    {
        cout<<"I become the guy.";
    }

    else
    {
        cout<<"Oh, my keyboard!";
    }
    
    return 0;
}
