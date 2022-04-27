#include<stdio.h>

int main()
{
    int i,j,k,bl=10;
    for(i=1; i<=5;i++)
    {
        for(k=1; k>=bl--; k++)
        {
            printf(" ");
        }
       for( j=1; j<=i;j++)
       {
           printf("*");

       } 
       printf("\n");
    }



    // // int i,j,k,bl=10;

    // for(i=1; i<=9;i+=2)
    // {
    //     for(k=1; k<=11-i; k++)
    //     {
    //         printf(" ");
    //     }
    //    for( j=1; j<=i ; j++)
    //    {
    //        printf("*");

    //    } 
    //    printf("\n");
    // }
    

    return 0;
}