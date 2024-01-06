#include<stdio.h>
int main()
{
    int i,c=0;
    char s[100];
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='
';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
          c=c+1;  
        }
    }
    printf("%d",c);
}