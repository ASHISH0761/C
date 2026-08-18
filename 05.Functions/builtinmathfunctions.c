#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    float root = sqrt(num);
    float cuberoot = cbrt(num);
    printf("The square root of %d is: %f\n",num,root);
    printf("The cube root of %d is: %f\n",num,cuberoot);
    int a,b;
    printf("enter base and power: ");
    scanf("%d%d",&a,&b);
    float p = pow(a,b);
    printf("%d raised to the power %d is: %f",a,b,p);
    return 0;
}