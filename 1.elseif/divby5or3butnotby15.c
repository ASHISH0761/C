#include<stdio.h>
int main(){ 
    int x;
    printf("enter a positive number: ");
    scanf("%d",&x);
    if (x>0){
        if (x%3==0 ||x%5==0){
           if(x%15==0) printf("the number entered is divisible by 3 or 5 and divisible by 15"); 
           else printf("the number entered is divisible by 5 or 3 but not divisible by 15");
         }
        else printf("the number entered is not divisible by 3 or 5");
    }
    else printf("the number entered is not positive");
    return 0;
}
