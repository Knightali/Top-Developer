#include<stdio.h>
int main()
{

                            /* 2    6
                               5    8
                            */



    int arr[2][2]={{2,6},  {5,8}};
    int i,j,tarr[2][2];

            //  =>  FOR SIMPLE MATRIX =>

    for(i=0; i<=1; i++)     // i: first loop for rows
    {
        for(j=0; j<=1; j++)     // j:  second loop for colom
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");


            //  => FOR TRANSPOSE OF MATRIX  =>

    for(i=0; i<=1; i++)         // i: first loop for colom
    {
        for(j=0; j<=1; j++)         // j: inner loop for rows
        {
            tarr[j][i] = arr[i][j];
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }

return 0;
}