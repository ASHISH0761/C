#include<stdio.h>
int main(){
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int sMax=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];//calculating the maximum value of the elements of the array
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>sMax && a[i]!=max){
            sMax=a[i];//calculating the second maximum value of the elements of the array
        }
    }
    printf("The second maximum value of the array is: %d",sMax);
    return 0;
}       