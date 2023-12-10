#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,ans;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a>>b;

        if(a%b!=0)
        {
            ans = b-(a%b);


        }
        else
        {
            ans=0;
        }

        cout<<ans<< endl;

    }

return 0;

}
