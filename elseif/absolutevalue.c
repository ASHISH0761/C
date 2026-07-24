#include<stdio.h>
int main(){
    int x;
    printf("enter a  number: ");
    scanf("%d",&x);
    if(x>=0) printf("the absolute value of the number entered is %d",x);
    else if(x<0){
        x=x*(-1);
        printf("the absolute value of the number entered is %d",x);
    }
     return 0;
}