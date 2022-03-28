#include<iostream>
using namespace std;
int main()
{
    int k,p,x,y,n,t;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>n;

        p = (n-y)/x;
        k = p*x+y;

        cout<<k<<endl;
    }

    return 0;
}
