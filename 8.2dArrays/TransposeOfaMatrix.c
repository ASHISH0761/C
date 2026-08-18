#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=a[j][i];
        }
    }
    printf("The transposed matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}       