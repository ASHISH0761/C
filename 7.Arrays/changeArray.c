#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);//calculating the size of the array
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]+=10;;//changing the even elements of the array
        }
        else{
            a[i]*=2;//changing the odd elements of the array
        }
    }
    printf("The changed array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}