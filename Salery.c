#include<stdio.h>

int main()
{
    int bs,da,hrs,gs;
    printf("Enter your Basic Salery\n");
    scanf("%d",&bs);
    da = (bs*40)/100;
    printf("Your dearness allowence is %d\n",da);
    hrs = (bs*20)/100;
    printf("Your house rent allowence is %d\n",hrs);
    gs = bs-(da+hrs);
    printf("your gross salery is %d\n",gs);
    return 0;
}