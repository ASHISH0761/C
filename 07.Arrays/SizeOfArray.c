#include<stdio.h>
int main(){
    int a[]={4,7,6,3,9,43,44,23,11,22,34,56,78};
    int n=sizeof(a)/sizeof(a[0]);//calculating the size of the array
    for(int i=0;i<n;i++){
        printf(" %d\n",a[i]);
    }
    printf("Size of the array is: %d",n);
    return 0;
}