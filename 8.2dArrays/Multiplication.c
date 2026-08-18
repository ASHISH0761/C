#include<stdio.h>
int main(){
    //Input of first matrix
    int m,n;
    printf("Enter the no. of rows and columns of the first matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the first matrix:  ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
         }
     }
    //Input of second matrix
    int p,q;
    printf("Enter the no. of rows and columns of the second matrix: ");
    scanf("%d %d",&p,&q);
    int b[p][q];
    printf("Enter the elements of the second matrix:  ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
         }
     }
    int c[m][q];
    if (n!=p){
        printf("Matrix multiplication is not possible\n");
    }
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    //I row of a * j column of b
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    }
    printf("\nResultant matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",c[i][j]);
          }
         printf("\n");
     }
    return 0;
}