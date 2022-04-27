#include<stdio.h>
int main()
{
int raw, i ,j ,sp;
// for(i=1; i<=9; i+=2)
// {
//     for(j=1; j<=11-i; j++)
//     {
//         printf(" ");
//     }
//     for(sp=1; sp<=i; sp++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }

for(i=5; i>=1; i--)
{
    for(sp=10; sp>=5+1; sp--)
    {
        printf(" ");
    }
    for(j=1; j<=i; j++)
    {
        printf("*");

    }
    printf("\n");
}



return 0;
}