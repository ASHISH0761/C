//display the ap 1,3,5,7,9..upto n terms
#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a+2;
    }
}