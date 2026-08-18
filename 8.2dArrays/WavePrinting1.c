//1 2 3
//4 5 6
//7 8 9
//after wave printing
//1 2 3
//6 5 4
//7 8 9

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
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
             }
         }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[i][j]);
             }
         }
        printf("\n");
    }
    return 0;
}