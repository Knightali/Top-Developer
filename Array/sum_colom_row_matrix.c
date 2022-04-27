#include<stdio.h>
int main()
{
int array[3][3];
int i,j,sum_colom[1][3]= { 0,0,0};
int sum_row[3][1] = { {0}, {0}, {0}};

        // INPUTING MATRIX FROM USER
        
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++){
        printf("Enter the matrix element[%d][%d] is \n",i,j);
        scanf("%d",&array[i][j]);
    }
    }

            // DISPLAYING MATRIX 

    printf("YOUR INPUTTING MATRIX IS:\n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {   
          printf("%d\t ",array[i][j]);
        }
        printf("\n");
    }
    

        // COLOM SUM MATRIX
    
    for (i = 0; i <=2; i++)
    {
    
        for (j = 0; j <=2; j++)
        {
            sum_colom[0][i] += array[j][i];
        }
        printf("Sum of column %d is %d\n", i + 1, sum_colom[0][i]);
    }


            // ROW SUM MATRIX

    for(i=0; i<=2; i++)
    {
        
        for(j=0; j<=2; j++)
        {
            sum_row[i][0] += array[i][j]; 
        }
        printf("sum of rows %d is %d\n",i + 1,sum_row[0][i]);
    }

    

return 0;
}