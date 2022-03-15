#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,toasts=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int toasts1 = k*l/nl;

    int toasts2 = c*d;

    int toasts3 = p/np;

    toasts = min(min(toasts1, toasts2), toasts3)/n;

    cout<<toasts;


    return 0;
}
