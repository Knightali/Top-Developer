#include<stdio.h>

int main()
{
    int num,a,b,c,d,e,f,g,h,sum;
    printf("Enter the 4 digit number\n");
    scanf("%d",&num);
    a=num/1000;
    b=num%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    g=f/1;
    h=f%1;
    sum= a+g;
    printf("Sum of first and last digit is %d\n",sum);


    return 0;
}