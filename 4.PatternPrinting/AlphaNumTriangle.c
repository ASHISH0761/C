#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            i%2==0?printf("%c ",j+64):printf("%d ",j);  
        }
        printf("\n");
    }
}

// enter the value of n:4
// 1 
// A B 
// 1 2 3 
// A B C D 