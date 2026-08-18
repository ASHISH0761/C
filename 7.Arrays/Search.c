#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    bool flag=false;
    int x=100;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            flag=true;
            break;
        }
    }
    if(flag==true){
        printf("%d is present in the array. ",x);
    }
    else{
         printf("%d is not present in the array. ",x);
    }
    return 0;
}       