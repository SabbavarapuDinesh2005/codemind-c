#include<stdio.h>
int main()
{
    int i,n,a,b,c=0,m=0;
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
            if(arr[i]>m)
            {
                m=arr[i];
                c=1;
            }
         }
     }
    if(c!=1)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}