#include<stdio.h>
int main(){
    float sp,cp;
    printf("enter the cost price: ");
    scanf("%f",&cp);
    printf("enter the selling price: ");
    scanf("%f",&sp);
    if(sp>cp) printf("the profit is %f",sp-cp);
    else if(cp>sp) printf("the loss is %f",cp-sp);
    else printf("there is no profit and no loss");
     return 0;
}