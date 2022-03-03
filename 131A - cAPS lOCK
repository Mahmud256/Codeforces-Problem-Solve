#include<iostream>
using namespace std;
int main()
{
    string s,ch;
    cin>>s;

    int i, c=0,d=0;

    for(i=1; i<s.size(); i++)
    {
        if(islower (s[i]))
           {
               c++;
           }
    }

    if(islower (s[0])&&c==0)
           {
               s[0]=toupper (s[0]);

               for(i=1; i<s.size(); i++)
               {
                   s[i]=tolower (s[i]);
               }
               cout<<s;
               return 0;
           }

            for(i=0; i<s.size(); i++)
           {
            if(isupper (s[i]))
           {
               d++;
           }
           }

           if(s.size()==d)
           {
            for(i=0; i<s.size(); i++)
           {
              s[i]=tolower(s[i]);
           }
           cout<<s;

           }

           else
           {
               cout<<s;
           }


    return 0;
}
