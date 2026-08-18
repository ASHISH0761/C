#include<stdio.h>
void change(int a[5]){
    a[2]=100;
}
int main(){
   int a[5]={1,2,3,4,5};
   printf("%d\n",a[2]);
   change(a);
   printf("%d\n",a[2]);
   return 0;
}
     