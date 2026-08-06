#include<stdio.h>
int main(){
    int i,j,n,a=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}


// enter the value of n:4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 