 //startriangleUlta
//pattern
// * * * *
// * * *
// * *
// *
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n+1-i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
//pattern 1 2 3 4
//        1 2 3 
//        1 2 
//        1 
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n+1-i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }  
//pattern 
// 1 1 1 1 
// 2 2 2 
// 3 3 
// 4 
// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n+1-i;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }
//pattern
// A A A A
// B B B 
// C C
// D
// #include<stdio.h>
// int main(){ 
//     int i,j,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n+1-i;j++){
//             printf("%c ",i+64);
//         }
//         printf("\n");
//     }
// }
// pattern
// A B C D  
// A B C
// A B
// A
#include<stdio.h>
int main(){ 
    int i,j,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}

