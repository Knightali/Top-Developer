#include<stdio.h>

int main()
{
    int money,hundred,a,fifty,b,ten,c;
    printf("Enter your money \n");
    scanf("%d",&money);
    hundred =money/100;
    a=money%100;
    fifty =a/50;
    b =a%50;
    ten =b/10;
    c =b%10;
    printf("Hundred Notes are  %d\n",hundred);
    printf("Fifty Notes are = %d\n",fifty);
    printf("Ten Notes are = %d\n",ten);
    return 0;
}