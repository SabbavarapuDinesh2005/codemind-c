#include<stdio.h>
int main(){
    int i,j,a,b,c,d,s=0;
    scanf("%d%d",&a,&b);
    int arr1[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
        scanf("%d",&arr1[i][j]);
        }
    }
    scanf("%d %d",&c,&d);
    int arr2[c][d],arr[c][d];
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
        scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            s=arr1[i][j]+arr2[i][j];
            arr[i][j]=s;
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
        printf("%d ",arr[i][j]);
        }
     printf("
");
}
}