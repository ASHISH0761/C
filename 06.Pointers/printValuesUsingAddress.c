#include<stdio.h>
int main(){
    int x=9;
    int* ptr=&x;
    printf("%d\n",x);
    printf("%p\n",ptr);
    printf("%d",*ptr);
    return 0;
}