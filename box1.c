#include<stdio.h>

int main()
{
    int r, c, row, colom;
    printf("Enter the number of rows \n");
    scanf("%d",&row);
     printf("Enter the number of colom \n");
    scanf("%d",&colom);

    for(r=1; r<=row; r++)
    {
        for(c=1; c<=colom; c++)
        {
            if(r>1 && r<row && c>1 && c<colom)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    getch();

    return 0;
}