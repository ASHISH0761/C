#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;
    int x=1;
    for(int i=0;i<n;i++){
        if(a[i]>x){
            count++;//counting the number of elements greater than x
        }
    }
    printf("The number of elements greater than %d is: %d",x,count);
    return 0;
}       