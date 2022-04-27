#include<stdio.h>

int main()
{
    int num,a,b,c,d,e,f,g,h,i,j,k,l,m,n,add;
    printf("Enter 5 digit number\n");
    scanf("%d",&num);
    a=num/10000;
    b=a*10000+10000;
    c=num%10000;
    d=c/1000;
    e=d*1000+1000;
    f=c%1000;
    g=f/100;
    h=g*100+100;
    i=f%100;
    j=i/10;
    k=j*10+10;
    l=i%10;
    m=l/1;
    n=m*1+1;
    add=b+e+h+k+n;
    printf("1addition in each digit of 5 digit number is %d\n",add);
    
    return 0;
}