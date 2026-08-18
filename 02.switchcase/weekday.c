#include<stdio.h>
int main(){ 
    int x;
    printf("enter a number between 1 to 7: ");
    scanf("%d",&x);
    switch(x){
        case 1: printf("The day is monday");
                break;
        case 2: printf("The day is tuesday");
                break;
        case 3: printf("The day is wednesday");
                break;
        case 4: printf("The day is thursday");
                break;
        case 5: printf("The day is friday");
                break;
        case 6: printf("The day is saturday");
                break;
        case 7: printf("The day is sunday");
                break;
        default: printf("invalid input");
    }
    return 0;
}