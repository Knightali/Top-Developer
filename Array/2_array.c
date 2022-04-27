#include<stdio.h>
int main()
{

                    /*  1   2   7
                        3   4   8
                        5   6   9
                    */

    int array[3][3]= {{1,2,7}, {3,4,8}, {5,6,9}};
    int i,j,T_array[3][3];

            // SIMPLE MATRIX

    for(i=0; i<=2; i++)             // i: first loop for rows
    // maximum rows are 3 so loop start from 0 and ends on 2
    {
        for(j=0; j<=2; j++)         // j:  inner loop for colom
        // maximum colom are 3 so loop start from 0 and ends on 2
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
            // TRANSPOSE OF MATRIX

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            T_array[j][i] = array[i][j];
            // printf("%d\t",T_array[j][i]);
        }
        printf("transpose of matrix is \n");
        printf("\n");
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=2; j++)
            {
                printf("%d\t",T_array[i][j]);
            }
            printf("\n");
        }
    }




return 0;
}