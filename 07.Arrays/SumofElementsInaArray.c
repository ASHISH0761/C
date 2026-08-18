#include<stdio.h>
int main(){
    int sum=0;
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];//calculating the sum of the elements of the array
    }
    printf("The sum of the elements of the array is: %d",sum);
    return 0;
}