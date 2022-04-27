#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter the 5 digit number\n ");
    scanf("%d",&a);
    b=a/10000;
    c=((a%10000)/1000)*10;
    d=((a%1000)/100)*100;
    e=((a%100)/10)*1000;
    f=((a%10)/1)*10000;
    g=b+c+d+e+f;
    printf("b= %d\n c =%d\n d=%d\n  e=%d\n f=%d\n g=%d\n",b,c,d,e,f,g);
    return 0;
}