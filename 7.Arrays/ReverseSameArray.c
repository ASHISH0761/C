#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("The reversed array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}       