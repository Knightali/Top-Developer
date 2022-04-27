#include<stdio.h>
int main()
{
    int Matrix_2[3][3],Matrix_1[3][3];
    int a,b,i,j,sum;

            // FIRST MATRIX INPUT

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            
         printf("Enter first matrix element[%d][%d] is:",i,j);
            scanf("%d",&Matrix_1[i][j]);
        }
    }

            //SECOND MATRIX INPUT

    for(i=0; i<=2; i++)
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
        for(j=0; j<=2; j++)
        {
            
         printf("%d\t",Matrix_1[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");

            // DISPLAYING SECOND MATRIX:

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            
         printf("%d\t",Matrix_2[i][j]);   
        }
        printf("\n");
    }
    
        printf("\n");

                // SUM OF TWO MATRIX :
        
    sum=0;
    printf("Sum of Matrix_1 and Matrix_2 is:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum =  (Matrix_1[i][j] + Matrix_2[i][j]);
            printf("%d\t",sum);
        }
        printf("\n");
        
    }


return 0;
}