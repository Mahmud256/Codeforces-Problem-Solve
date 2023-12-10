#include<iostream>
using namespace std;
int main()
{
    int n,h,i,c1=0,c2=0;
    cin>>n>>h;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=h)
    {
        c1++;
    }
    else
    {
        c2+=2;
    }

    }

    cout<<c1+c2;
    
return 0;

}
