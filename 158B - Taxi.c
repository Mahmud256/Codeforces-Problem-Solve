#include<stdio.h>
int main()
{
    int n,i,a,sum=0;
    int c1=0,c2=0,c3=0,c4=0;

    scanf("%d",&n);
    for(i=0; i<n; i++){

    scanf("%d",&a);
     if(a==1)c1++;
        else if(a == 2)c2++;
        else if(a == 3)c3++;
        else c4++;
    }
     sum = sum+c4;
     c4 = 0;
    sum = sum + c2/2;
    c2 = c2%2;

    if(c1>=c3)
    {
        sum = sum + c3;
        c1 = c1 - c3;
        c3 = 0;
        sum = sum + c1/4;
        c1 = c1%4;
        if(c1 + c2*2 <=4 && c1 + c2*2 >0)
        {
            sum++;
            c1 = 0;
            c2 = 0;
        }
        else if(c1 == 3 && c2 == 1)
        {
            sum = sum + 2;
            c1 = 0;
            c2 = 0;
        }
    }
    else
    {
        sum = sum + c1;
        c3 = c3 - c1;
        c1 = 0;
        sum = sum + c3 + c2;
    }

    printf("\n%d\n",sum);
    
    return 0;
    
}
