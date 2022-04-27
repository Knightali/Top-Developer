#include<stdio.h>

int main()
{
    char g;
    int m;
    printf("Enter your marks\n");
    scanf("%d",&m);
    (m>=90)?(g='A'):(m>=80 && m<=89)?(g='B'):(m>=70 && m<=79)?(g='C'):(m>=60 && m<=69)?(g='D'):(m<=60)?(g='E'):(0);
    printf("Your grade is %c",g);
    return 0;
}