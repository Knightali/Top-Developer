#include<stdio.h>

int main()
{
    float sp,prop,cp;
    printf("Enter your sale price on 15 items\n ");
    scanf("%f",&sp);
    printf("Enter your profit price on 15 items\n");
    scanf("%f",&prop);
    printf("print profit price %f\n",prop);
    cp = (sp-prop)/15;
    
    printf("Your cost price is %f\n",cp);
    return 0;
}