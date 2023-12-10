#include<stdio.h>
#include<string.h>
 int main()
 {
    char str[100];
    int n,i,count=0;
    scanf("%s",&str);
    n=strlen(str);

    for(i=0; i<n; i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
    }
 
