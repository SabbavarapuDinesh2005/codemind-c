#include<stdio.h>
int main()
{
    int n,i,s=0,a,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       s=s+i; 
    }
    a=s/n;
    for(i=0;i<n;i++)
    {
        if (arr[i]==a)
        {
            c=1;
            printf("True");
            break;
        }
    }
    if(c!=1)
    {
        printf("False");
    }
}