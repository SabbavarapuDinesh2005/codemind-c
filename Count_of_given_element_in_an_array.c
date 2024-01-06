#include<stdio.h>
int main()
{
    int i,n,c=0,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
       if(arr[i]==x)
       {
           c=c+1;
       }
    }
    printf("%d",c);
}