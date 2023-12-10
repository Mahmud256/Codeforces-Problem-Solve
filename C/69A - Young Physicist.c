#include<stdio.h>
int main()
{
    int n,i,j,A[100][100],sum=0,sum1=0,sum2=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
       for(j=0; j<3; j++)
       {
           scanf("%d",&A[i][j]);
       }

       sum+=A[i][0];
       sum1+=A[i][1];
       sum2+=A[i][2];

    }

      if(sum==0 && sum1==0 && sum2==0)
      {
          printf("YES");
      }

      else{

        printf("NO");
      }


    return 0;
}
