#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans;
    cin>>t;

    while(t--)
    {
        string s;

        cin>>s;

        int dig = s[0]-'0'-1;
        int len = s.size();

         ans = dig*10+len*(len+1)/2;

        cout<<ans<<endl;

    }

    return 0;
}
