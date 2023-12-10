#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, i, c=0;
    string s;
    cin>>n>>s;

    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]!=s[i+1])
        {
         cout<<"YES"<<endl;
         cout<<s[i]<<s[i+1];
         c=1;
         break;
        }
    }

    if(c==0)
    {
         cout<<"NO";
    }

    return 0;
}
