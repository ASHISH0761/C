#include<stdio.h>
int main(){
    int x;
    printf("enter a positive number: ");
    scanf("%d",&x);
    if(x>0){
      if(x%5==0) printf("the number entered is divisble by 5 ");
      else printf("the number entered is not divisble by 5 ");
    }
    else printf("the number entered is not positive");
     
}