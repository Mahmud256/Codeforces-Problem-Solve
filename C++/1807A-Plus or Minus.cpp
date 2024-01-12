#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c;
    
    cin>>n;
    
    while(n--)
    {
        cin>>a>>b>>c;
        
        if(a+b==c)
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
    }
    
    

    return 0;
}
