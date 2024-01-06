#include<stdio.h>
int main()
{
    int i,n,s1=0,s2=0,d;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+arr[i];
        }
        else
        {
            s2=s2+arr[i];
        }
    }
    d=s2-s1;
    if(d>0)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",-1*d);
    }
}