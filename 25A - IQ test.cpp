#include<iostream>
using namespace std;
int main()
{
   int n,i,even=0,odd=0;
   cin>>n;
   int arr[n];

   for(i=0; i<n; i++)
   {
       cin>>arr[i];

       if(arr[i]%2==0)
       {
           even++;
       }
       else
       {
           odd++;
       }
   }

   if(even>odd)
   {
       for(i=0; i<n; i++)
   {
       if(arr[i]%2!=0)
       {
           cout<<i+1;
           break;
       }
   }
   }

   else
    {
       for(i=0; i<n; i++)
   {
       if(arr[i]%2==0)
       {
           cout<<i+1;
           break;
       }
   }
   }


return 0;


}


 
