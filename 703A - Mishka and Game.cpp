#include<stdio.h>
int main()
{
    int n,i,m[100],c[100],Mishka=0,Chris=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&m[i]);
        scanf("%d",&c[i]);
    }

    for(i=0; i<n; i++)
    {
        if(m[i]>c[i])
        {
            Mishka++;
        }
       else if(m[i]<c[i])
        {
            Chris++;
        }
    }

    if(Mishka>Chris)
        {
            printf("Mishka");
        }
       else if(Mishka<Chris)
        {
            printf("Chris");
        }

        else
        {
            printf("Friendship is magic!^^");
        }



    return 0;
}
