#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int r=0,ld;
    while(n!=0){
        ld=n%10;
        r=r*10+ld;
        n=n/10;
        
    }
    printf("the reverse of the number is %d\n",r);
}