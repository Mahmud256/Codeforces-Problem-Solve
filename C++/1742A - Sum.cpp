#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, m;
    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;

        m = max(max(a,b),c);

        if(m==a)
        {
            if(m==b+c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(m==b)
        {
            if(m==a+c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(m==c)
        {
            if(m==a+b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}