#include<stdio.h>
int main(){ 
    int x;
    printf("enter the year: ");
    scanf("%d",&x);
    
    (x%400==0 || (x%4==0 && x%100!=0))? printf("leap year") : printf("not a leap year");
    return 0;
}