#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int n[t];

    for(i=0; i<t; i++)
    {
        cin>>n[i];


    }

    cout<<endl;

    for(i=0; i<t; i++)
    {
         if(n[i]==1 || n[i]==2)
         {
             cout<<"0"<<endl;
         }
         else
         {
             cout<<(n[i]-1)/2<<endl;
         }
    }
  
  return 0;
  
}
