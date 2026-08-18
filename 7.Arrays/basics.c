#include<stdio.h>
int main(){
    int a[]={4,7,6,3,9};//initialization and declaration of the array
    printf("%d",a[1]);
    a[1]=15;//updating the value
    for(int i=0;i<5;i++){
        printf("\n%d",a[i]);//printing the values of the array
    }
    // int arr[5];
    // printf("Enter the values of the array: ");
    // for(int i=0;i<5;i++){
    //     scanf("%d",&arr[i]);//taking input from the user
    // }
    // for(int i=0;i<5;i++){
    //     printf(" %d",arr[i]);//printing the values of the array
    // }
    return 0;
}