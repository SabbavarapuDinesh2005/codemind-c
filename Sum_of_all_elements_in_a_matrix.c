#include<stdio.h>
int main(){
    int i,j,a,b,s=0;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            s=s+arr[i][j];
        }
    }
        printf("%d",s);
}