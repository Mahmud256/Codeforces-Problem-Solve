#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        if(n<k)
        {
            cout<<k-n<<"\n";
        }

        else if(n%2==k%2)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<1<<"\n";
        }
    }

    return 0;
}
