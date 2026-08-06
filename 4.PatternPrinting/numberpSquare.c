#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}

// enter the value of n:4
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
// 4 4 4 4 