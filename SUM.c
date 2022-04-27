#include<stdio.h>

int main()
{
    // int a , b;
    // a=2;
    // for(b=1; b<=10; b++)
    // {
    //     printf("%d * %d = %d",a ,b , a*b);
    // }

    // char  i;
    // for (i = 'a'; i <= 'e'; i++)
    // {
 
        
    //     printf(" %c\n",i);
    // }

    int a,sum;
    sum=0;
    for(a=10; a<=29; a+=2)
    {
        sum+=a;
    }
    printf("sum is %d", sum);
    

    return 0;
}