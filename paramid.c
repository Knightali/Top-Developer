#include<stdio.h>
int main()
{
    int rows,i,j,sp;
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i+=1)
    {
        for(sp=1; sp<=rows-i; sp++)
        {
            printf(" ");
        }
        for(j=1; j<=2*(i)-1; j++)
        {
           
                printf("*");
            
        }
        printf("\n");
    }
    for(i=1; i<=rows; i++)
    {
        for(sp=1; sp<=i; sp++)
        {
            printf(" ");
        }
        for(j=1; j<=2*(rows-i)-1; j++)
        {
           
            printf("*");
          
        }
        printf("\n");
    }
return 0;
}