#include<iostream>
using namespace std;
int main()
{
    long long int t,a,b,c,n;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;

        n = 2*abs(a-b);

        if(a>n || b>n || c>n)
        {
            cout<<-1<<endl;
        }

        else
        {
            long long int d = n/2+c;

            while(d>n)
            {
                d-=n;
            }
            cout<<d<<endl;
        }

    }

    return 0;
}
