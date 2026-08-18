#include<stdio.h>
int main(){
    int n,flag=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(n==1){
        printf("1 is neither prime nor composite");
    }
    else if(flag==1){
        printf("%d is prime",n);
      }
    else printf("%d is not prime",n);
}