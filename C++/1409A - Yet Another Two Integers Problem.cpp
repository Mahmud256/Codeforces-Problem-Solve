#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,ans;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        x = abs(a-b);

        ans = x/10+(x%10!=0);  /*if(x%10!=0)
                                    {
                                        ans = ans+1;
                                     }*/
        cout<<ans<<endl;
    }

    return 0;
}
