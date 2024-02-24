#include<stdio.h>
int main()
{
    int i,j,n,m,s;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
           s=s+arr[j][i]; 
        }
        printf("%d ",s);
    }
}