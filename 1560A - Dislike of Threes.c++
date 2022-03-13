#include<iostream>
using namespace std;
int main()
{
    int t,i,k;
    cin>>t;

    while(t--)
    {
        cin>>k;

        for(i=1; ; i++)
        {
            if(i%3==0 || i%10==3)
            {
                continue;
            }

            if(--k==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }



    return 0;
}
