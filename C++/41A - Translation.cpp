#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,i;
    cin>>s>>i;
    reverse(s.begin(),s.end());
    if(s==i)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
return 0;

}
