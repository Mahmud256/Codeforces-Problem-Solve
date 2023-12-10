#include<iostream>
using namespace std;
 int main()
{
   int n,i,j,count=0;
   cin>>n;
   int x[n], y[n];
   for(i=0; i<n; i++)
   {
       cin>>x[i];
       cin>>y[i];
   }

   for(i=0; i<n; i++)
   {
       for(j=0; j<n; j++)
   {
       if(x[i]==y[j])
       count++;
   }

   }

   cout<<count;

return 0;
   
}
 
