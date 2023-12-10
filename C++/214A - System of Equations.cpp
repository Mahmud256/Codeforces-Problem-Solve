#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,mn;
    int pair=0;

    cin>>n>>m;
    mn = min(n,m);

    for(i=0; i<=mn; i++)
    {
        for(j=0; j<=mn; j++)
        {
            if(i*i+j==m && j*j+i==n)
            {
                 pair++;
            }
        }
    }

    cout<<pair;

    return 0;
}
