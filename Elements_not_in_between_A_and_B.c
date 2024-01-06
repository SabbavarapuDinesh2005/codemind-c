#include<stdio.h>
int main()
{
    int i,n,a,b,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
     for(i=0;i<n;i++)
     {
         if( arr[i]<a|| arr[i]>b )
         {
            c=1;
         printf("%d ",arr[i]);
         }
     }
     if(c!=1)
     {
         printf("-1");
     }
}