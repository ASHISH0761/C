#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0,ld;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
        
    }
    printf("the sum of digits is %d\n",sum);
}