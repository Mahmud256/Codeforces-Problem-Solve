#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 int main()
{
   int count=0,i;
   string s;
   getline(cin, s);
   sort(s.begin(),s.end());

   for(i=0; i<s.size(); i++)
   {
       if( s[i]==',' || s[i]==' ')
        {
            continue;
        }

        else
        {
            if(s[i]!=s[i+1])
            {
                count++;
            }
        }

   }
   cout<<count-2;
}
