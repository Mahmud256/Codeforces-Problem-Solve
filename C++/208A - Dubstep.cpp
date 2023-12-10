#include<iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    int i;
    cin>>S;

    for(i=0; i<S.size(); i++)
    {

        if(S[i]=='W' && S[i+1]=='U' && S[i+2]=='B')
        {
           i=i+2;
            cout<<" ";
        }

        else
        {
              cout<<S[i];
        }


    }

return 0;

}

 
