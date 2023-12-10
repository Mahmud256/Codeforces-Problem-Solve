#include<iostream>
using namespace std;
int main()
{
    int k,r,i;
    cin>>k>>r;

    int sum=0;

    for(i=1;;i++)
    {
        sum+=k;

        if((sum%10==0) || (sum%10==r))
        {
            cout<<i;
            break;
        }
        else
        {
            continue;
        }
    }


    return 0;
}
