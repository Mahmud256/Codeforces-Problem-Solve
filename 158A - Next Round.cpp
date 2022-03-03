#include<iostream>
using namespace std;
int main()
{
    int n,k,i,c[100],count=0;
    cin>>n>>k;

    for(i=0; i<n; i++)
    {
        cin>>c[i];
    }

    for(i=0; i<n; i++)
    {
        if(c[i]>0 && c[i]>=c[k-1])
        {
            count++;
        }
    }

    cout<<count;




}
