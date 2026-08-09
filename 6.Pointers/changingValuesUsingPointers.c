#include<stdio.h>
int main(){
    int x=9;
    int* ptr=&x;
    printf("%d\n",x);
    *ptr=56;
    printf("%d\n",x);
    return 0;
}