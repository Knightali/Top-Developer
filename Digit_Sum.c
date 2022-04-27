#include<stdio.h>

int main()
{
    int num,a,b,c,d,e,f,g,h,i,j,sum;
    printf("Enter 5 digit number");
    scanf("%d",&num);
    a = num/10000;
    b = num%10000;
    c = a/1000;
    d = a%1000;
    e = c/100;
    f = c%100;
    g = e/10;
    h = e%10;
    i = g/1;
    j = g%1;
    sum = a + c + e + g + i;
    printf("Sum is %d\n",sum);
    
    return 0;
}