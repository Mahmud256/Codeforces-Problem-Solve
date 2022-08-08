#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,c=0,ans=0;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int j=0; j<n; j++)
    {
       if(arr[j]>s)
        {
            s = arr[j];
        }
    }

    for(int l=0; l<n; l++)
    {
        c = s-arr[l];
        ans = ans+c;
    }

     cout<<ans<<endl;

    return 0;
}
