#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}

// enter the value of n:4
// A 
// A B 
// A B C 
// A B C D 