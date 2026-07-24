#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0,ld,pro=1;
    while(n!=0){
        ld=n%10;
        if(ld%2==0) {
            sum=sum+ld;
            pro=pro*ld;
        }
        n=n/10;
    }
    printf("the sum of even digits is %d\n",sum);
    printf("the product of even digits is %d\n",pro);
}