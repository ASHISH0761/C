#include<stdio.h>
int main(){ 
    int x;
    printf("enter a three digit number: ");
    scanf("%d",&x);
    if (x>0){
        if(x>=100 && x<=999) printf("the number entered is a three digit number");
        else printf("the number entered is not a three digit number");
      }
    else printf("the number entered is not positive");
    return 0;
}
