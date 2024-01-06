#include<stdio.h>
int main()
{
    int i,n,x,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
       if(x==arr[i])
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