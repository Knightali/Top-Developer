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
            if(i<=rows-1){
            if((j>=1 && j<rows*2-1) && (j>=2 && j<2*i-1) ){
                printf(" ");
            }
            else{
            printf("*");
            }
            }
            else{
            printf("*");
            }
           
        }
        printf("\n");
    }
    return 0;
}