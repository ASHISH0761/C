#include<stdio.h>
void oddEven(int num){
    if(num%2==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    oddEven(num);
    return 0;
}