#include<stdio.h>
int main(){
    int pro=1;
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        pro*=a[i];//calculating the product of the elements of the array
    }
    printf("The product of the elements of the array is: %d",pro);
    return 0;
}