#include<iostream>
using namespace std;
int main()
{
    int n,i,mx=0,mi=101,maxi,mini;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            maxi=i;
        }

        if(arr[i]<=mi)
        {
            mi=arr[i];
            mini=i;
        }
    }

    if(maxi>mini)
    {
        mini++;
    }

    cout<<maxi+(n-1)-mini;

return 0;

}

 
