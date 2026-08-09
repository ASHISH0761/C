#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int main(){
    int a,b;
    printf("enter two numers:");
    scanf("%d%d",&a,&b);
    int c=min(a,b);
    printf("The minimum of %d and %d is: %d",a,b,c);
    return 0;
}