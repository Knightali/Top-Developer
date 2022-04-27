#include<stdio.h>

int main()
{
    int distance;
    float meter,feet,inches,centimeter;
    printf("Enter Distance b/w Two cities:\n",distance);
    scanf("%d",&distance);
    meter = distance*1000;
    printf("Your distance in meter b/w two cities is %f\n",meter);
    centimeter = meter*100;
    printf("Your distance in centimeter b/w two cities is %f\n",centimeter);
    feet = meter*3.28;
    printf("Your distance in feet b/w two cities is %f\n",feet);
    inches = feet *12;
    printf("Your distance in inches b/w two cities is %f\n",inches);
    return 0;
}