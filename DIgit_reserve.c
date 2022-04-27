#include<stdio.h>

int main()
{
    int num,a,b,c,d,e,reverse;
    printf("Enter the five digit number\n");
    scanf("%d",&num);
    a=num/10000;
    a=num%10000;
    b=num/1000;
    b=num%1000;
    c=num/100;
    c=num%100;
    d=num/10;
    d=num%10;
    e=num/1;
    e=num%1;
    // a=num/10000;
    // b=((num%10000)/1000)*10;
    // c=((num%1000)/100)*100;
    // d= ((num%100)/10)*1000;
    // e= ((num%10)/1)*10000;

    // reverse = e*1+d*10+c*100+b*1000+a*10000;
    reverse=a*1+b*10+c*100+d*1000+e*10000;
    
    printf("Revdrse number is %d\n",reverse);
    return 0;
}