#include<iostream>
using namespace std;
int main()
{
    int n,k,i,count=0;
    cin>>n>>k;
    int minute=240-k;
    int c_minute=0;
    for(i=1; i<=n; i++)
    {
        c_minute=c_minute+i*5;
        if(c_minute<=minute)
        {
            count++;
        }
      
    }
    cout<<count;

  return 0;

}
