#include<stdio.h>

int main()
{
    float l,b,r,ar,pr,ac,cc;
    printf("Enter the lenght\n");
    scanf("%f",&l);
    printf("Enter the breath\n");
    scanf("%f",&b);
    printf("Enter the radius\n");
    scanf("%f",&r);
    ar = l*b;
    pr = 2*(l+b);
    ac = 3.14*r*r;
    cc = 2*3.14*r;
    printf("Area of rectangle is %f\n",ar);
    printf("perimeter of rectangle is %f\n",pr);
    printf("Area of circle is %f\n",ac);
    printf("circle circumference is %f\n",cc);
    return 0;
}