#include<stdio.h>
int main(){
    int a[4][2]={{1,78},{2,87},{3,98},{4,54}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}