#include<stdio.h>
int main()
{
    int i,n,o;
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
            o=arr[i];
        }
    }
    printf("%d",o);
}