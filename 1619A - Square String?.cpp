#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()%2==0)
        {
            string x,y;
            for(i=0;i<s.size()/2;i++)
            {
                x+=s[i];
            }
            for(i=s.size()/2;i<s.size();i++)
            {
                y+=s[i];
            }
           if(x==y)
            {
                cout<<"YES"<<endl;
            }

            else
            {
                cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
