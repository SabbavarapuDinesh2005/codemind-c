#include<stdio.h>
int main()
{
    int i,j=0,n;
    scanf("%d",&n);
    int arr[n],array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            array[j]=arr[i];
            j=j+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            array[j]=arr[i];
            j=j+1;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}