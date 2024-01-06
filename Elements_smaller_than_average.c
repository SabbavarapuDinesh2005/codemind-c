#include<stdio.h>
int main()
{
    int i,n,s=0,a,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    a=s/n;
    for(i=0;i<n;i++)
    {
        if(a>=arr[i])
        {
            c=c+1;
        }
    }
    printf("%d",c);
}