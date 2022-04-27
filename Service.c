#include<stdio.h>

int main()
{
    char g;
    int year_of_service,qualification,salary;
    printf("Enter your gender\n");
    scanf("%c",&g);
    printf("Enter your year of services \n");
    scanf("%i",&year_of_service);
    printf("Enter your qualification(0=Graduate 1=post_graduate):\n");
    scanf("%i",&qualification);
    if(g =='m'&& year_of_service>=10 && qualification==1)
    {
    salary=15000;
    printf("your salary is %d\n",salary);
    }
    if(g =='m'&& year_of_service>=10 && qualification==0)
    {
    salary=10000;
    printf("your salary is %d\n",salary);
    }
    if(g=='m'&& year_of_service<10 && qualification==1)
    {
    salary=10000;
    printf("your salary is %d\n",salary);
    }
    if(g=='m'&& year_of_service<10 && qualification==0)
    {
    salary=7000;
    printf("your salary is %d\n",salary);
    }
    if(g=='f'&& year_of_service>=10 && qualification==1)
    {
    salary=12000;
    printf("your salary is %d\n",salary);
    }
    if(g=='f'&& year_of_service>=10 && qualification==0)
    {
    salary=9000;
    printf("your salary is %d\n",salary);
    }
    if(g=='f'&& year_of_service<10 && qualification==1)
    {
    salary=1000;
    printf("your salary is %d\n",salary);
    }
    if(g=='f'&& year_of_service<10 && qualification==0)
    {
    salary=6000;
    printf("your salary is %d\n",salary);
    }


    return 0;
}