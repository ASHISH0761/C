#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            ((i+j)%2==0)?printf("%d ",1):printf("%d ",0);
        }
        printf("\n");
    }
}

// enter the value of n:5
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1