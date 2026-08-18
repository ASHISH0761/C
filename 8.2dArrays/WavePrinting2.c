//1 2 3
//4 5 6
//7 8 9
//after wave printing
//7 4 1
//2 5 8
//9 6 3

#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the no. of rows and columns of the first matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the first matrix:  ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
         }
     }
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                printf("%d ",a[i][j]);
             }
         }
        else{
            for(int i=0;i<n;i++){
                printf("%d ",a[i][j]);
             }
         }
        printf("\n");
    }
    return 0;
}