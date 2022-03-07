#include<iostream>
using namespace std;
int main()
{
    int a,b,m,s,p;
    cin>>a>>b;
    if(a>b)
    {
        m=b;
    }
    else
    {
        m=a;
    }
    
    p=abs(a-b)/2;

    cout<<m<<" "<<p;

  return 0;
  
}
