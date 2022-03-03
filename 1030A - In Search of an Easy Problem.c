#include<stdio.h>
int main()
{
    int n,i,t,c=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&t);
        if(t==1)
        {
            c++;
        }
    }

    if(c==0)
    {
        printf("EASY");
    }

    else
    {
        printf("HARD");
    }

    return 0;
}
