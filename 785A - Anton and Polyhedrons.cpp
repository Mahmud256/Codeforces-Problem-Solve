#include<iostream>
#include <string>
using namespace std;
int main()
{
    int n,j,count=0;
    cin>>n;
    string s[n];

    for(j=0; j<n; j++)
    {
        cin>>s[j];
        if(s[j]=="Tetrahedron")
        {
            count+=4;
        }

        if(s[j]=="Cube")
        {
            count+=6;
        }

        if(s[j]=="Octahedron")
        {
            count+=8;
        }

        if(s[j]=="Dodecahedron")
        {
            count+=12;
        }

        if(s[j]=="Icosahedron")
        {
            count+=20;
        }

    }

    cout<<count;

  return 0;

}
