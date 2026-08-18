#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
    }
    printf("The reversed array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}       