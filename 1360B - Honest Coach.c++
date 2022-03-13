#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;

    cin>>t;

    while(t--)
    {
        cin>>n;
        vector<int>v(n);

        for(i=0; i<v.size(); i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int result = v[n - 1] - v[0];

		for ( i = 0; i < n; i++) {
			for ( j = i + 1; j < n; j++) {

				 result = min(result, v[j] - v[i]);


			}

		}
					cout<<result<<endl;

    }



    return 0;
}
