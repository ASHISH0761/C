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
    int maxSum=0,r;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j]; 
           }
        if(maxSum<sum){
            maxSum=sum;
            r=i;
        }
    }
    printf("The maximum sum of the elements of the array is: %d",maxSum);
    printf("The row with the maximum sum is: %d",r);
    return 0;
}       