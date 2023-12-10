#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i,p=0;
    scanf("%s",&str);
    n=strlen(str);

        for(i=0; i<n; i++)
        {
            if(str[i]=='H')
        {
           p++;
           printf("YES");
            break;

        }
       else if(str[i]=='Q')
        {
           p++;
           printf("YES");
            break;

        }
         else if(str[i]=='9')
        {
           p++;
           printf("YES");

            break;

        }

        }
        if(p==0)
        {
            printf("NO");
        }
        
    return 0;
}
