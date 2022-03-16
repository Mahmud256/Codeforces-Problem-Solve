#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i;
    string a,b;

    cin>>test;

    while(test--)
    {
        cin>>b;

        a = b.substr(0,2);

        for(i=3; i<b.size(); i+=2)
        {
            a+=b[i];
        }

        cout<<a<<endl;

    }


    return 0;
}
