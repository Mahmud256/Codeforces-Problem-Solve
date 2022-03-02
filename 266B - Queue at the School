#include<stdio.h>
#include<string.h>
#define max 100000
int main()
{

    int a,b,i,j,f;
    scanf("%d%d",&a,&b);
    char s[max];
    scanf("%s",&s);
    f=strlen(s);
    for(i=0; i<b; i++){
        for(int j=0; j<f-1; j++){
            if(s[j]=='B' && s[j+1]=='G')
            {
              s[j]='G';
              s[j+1]='B';
              j++;
            }
        }
    }
    printf("%s",s);

 return 0;
}
