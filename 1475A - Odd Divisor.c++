#include<iostream>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n & (n-1))
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
