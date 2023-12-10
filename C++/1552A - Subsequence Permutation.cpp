#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,n,k;
    string s,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;

        z=s;

        sort(z.begin(),z.end());

        k=0;

        for(int i=0; i<n; i++)
        {
          if(s[i]!=z[i])
        {
            k++;
        }

        }

        cout<<k<<endl;;

    }

    return 0;
}
