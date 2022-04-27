#include<stdio.h>

int main()
{
    int paise= 50, fine,rupees = 1,days;
    printf("Eter yours days ");
    scanf("%d",&days);
    if(days<=5)
    {
        fine = paise;
        printf("YOur late return fine is %d paise\n",fine);
    }
    if(days>=6 && days <= 10)
    {
        fine = rupees;
        printf("YOur late return fine is %d rupees\n",fine);
    }
    if(days>10)
    {
        fine = 10 * rupees;
        printf("your late return fine is %d rupees\n",fine);

    }
    return 0;
}