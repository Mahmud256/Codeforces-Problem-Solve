#include<iostream>
using namespace std;
int main()
{
      int n,i;
      cin>>n;
      float sum=0;
      int j;
    for(i=0; i<n; i++)
    {
        cin>>j;

        sum=sum+j;
    }

    cout<<sum/n;
    
return 0;

}
