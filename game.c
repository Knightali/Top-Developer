#include<stdio.h>

int main()
{
    int m=21,p,c;
    while(m>1)
    {
        printf("\nNumber of match sticks left = %d\n",m);
        printf("Pick 1 or 2 or 3 or 4 matches :\n");
        scanf("%d",&p);

        if(p>=1 && p<=4){
        

        m=m-p;
        printf("Number of matches left = %d\n",m);

        c = 5-p;

        printf("Out of which computer picked up : %d\n",c);

        m =m-c;
        if(m==1)
        {
            printf("\nNumber of matches left = %d\n",m);
            printf("You lost the game\n");
        }
    }
    else
    printf("Invalid Entry:");
    }

        printf("\t\t\tTHE \n\t\t\tEND");

    return 0;
}