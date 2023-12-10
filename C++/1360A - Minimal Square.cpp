#include<iostream>
using namespace std;
int main()
{
    int a,b,t,side=0;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        side = min(max(a*2,b),max(a,b*2));

        int ans = side*side;

        cout<<ans<<endl;
    }

    return 0;

}
