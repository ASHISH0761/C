#include<stdio.h>
int main(){
    int x=9;
    int* a=&x;
    int y=9;
    int* b=&y;
    printf("\n%p\n",a);
    printf("\n%p\n",b);
    return 0;
}