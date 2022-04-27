#include<stdio.h>
int main()
{
int Matrix_2[2][3],Matrix_1[3][2];
    int k,i,j,sum[3][3];

            // FIRST MATRIX INPUT

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=1; j++)
        {
            
         printf("Enter first matrix element[%d][%d] is:",i,j);
            scanf("%d",&Matrix_1[i][j]);
        }
    }

            //SECOND MATRIX INPUT

    for(i=0; i<=1; i++)
    {
        for(j=0; j<=2; j++)
        {
            
         printf("Enter second matrix element[%d][%d] is:",i,j);
            scanf("%d",&Matrix_2[i][j]);
        }
    }

            // DISPLAYING FIRST MATRIX :

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=1; j++)
        {
            
         printf("%d\t",Matrix_1[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");

            // DISPLAYING SECOND MATRIX:

    for(i=0; i<=1; i++)
    {
        for(j=0; j<=2; j++)
        {
            
         printf("%d\t",Matrix_2[i][j]);   
        }
        printf("\n");
    }
    
        printf("\n");

                // MULTIPLY OF TWO MATRIX :
                printf("MULTIPLY OF 2 MATRIX IS :\n\n");

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            for(k=0; k<=2; k++)
            {
                sum[i][j] = sum[i][j] +  (Matrix_1[i][k] * Matrix_2[k][j]);
                 
            }
           printf("%d\t",sum[i][j]);

        }
         printf("\n");
    }     

return 0;
}