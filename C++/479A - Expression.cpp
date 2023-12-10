#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

   int result1=a+b*c;
   int result2=a*(b+c);
   int result3=a*b*c;
   int result4=(a+b)*c;
   int result5=a+b+c;

    int result = max(result4,max(result3,max(result5,max(result1,result2))));

    cout<<result;


    return 0;
}
