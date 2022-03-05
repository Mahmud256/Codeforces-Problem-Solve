//#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ns,mp,i,k,ans;
    cin>>ns>>mp;
    int arr[mp];
    
    for(i=0; i<mp; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+mp);
    
    k = arr[mp-1]-arr[0];
    
    for(int j=ns; j<=mp; j++)
    {
        ans = arr[j-1] - arr[j-ns];
        ans = abs(ans);
        k = min(ans,k);
    }
    
    cout<<k;
    
    
    return 0;
}
