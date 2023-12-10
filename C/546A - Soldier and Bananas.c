#include<stdio.h>
#include<math.h>
int main()
{
    int k,n,w,i,sum=0,borrow=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1; i<=w; i++)
    {
        borrow=borrow+i;

    }

      sum=(borrow*k)-n;

      if(sum<0)
      {
          printf("0");
      }

      else
      {
          printf("%d",sum);
      }

    return 0;
}
