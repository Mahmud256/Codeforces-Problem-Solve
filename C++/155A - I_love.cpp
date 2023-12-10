#include<iostream>
using namespace std;
int main()
{
    int a,i,max,min,count=0;
    cin>>a;
    int arr[a];

    for(i=0; i<a; i++)
    {
        cin>>arr[i];
    }

    max=arr[0];
    min=arr[0];

    for(i=0; i<a; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }

         if(arr[i]<min)
        {
            min=arr[i];
            count++;
        }
    }

    cout<<count;
  
  return 0;
  
}
