#include<stdio.h>
int main()
{
    int i,n,c1=0,c2=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c1=c1+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0 && i%2!=0)
        {
            c2=c2+1;
        }
    }
    if(c1==c2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}