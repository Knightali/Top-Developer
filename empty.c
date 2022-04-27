#include<stdio.h>
int main()
{
    int i,j,k,bl=9;
    for(i=1; i<=9; i+=2){
        for(k=1; k<=bl; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
        bl-i;
    }
    // for(i=9; i>=1; i-=2){
    //     for(k=bl; k>=1; k--){
    //         printf(" ");
    //     }
    //     for(j=1; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    //     bl++;
    // }
return 0;
}