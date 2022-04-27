#include<stdio.h>

int main()
{
    float fahreheit,celcius;
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fahreheit);
    celcius = (5/9)*(fahreheit+32);
    printf("Temperature in celcius is %f\n",celcius);
    return 0;
}