#include<stdio.h>
void main()
{
    char h='e',l='c',g;             // 'h' is health:  'l' is living status: 'g' gender:
    int age,policy_amount;
    float premium;

    printf("Enter your gender \n\t\t (Hint:- M for male and F for female)\n");
    scanf("%s",&g);
    printf("Enter your age\n");
    scanf("%d",&age);

    // first condition

    if(h=='e' && (age>=25 && age<=35) && l=='c' && g=='m' && policy_amount<=200000)
    {
        premium = policy_amount/1000;
        premium = premium*4;
        printf("Your premium on 4 per thousand is %d\n",premium);
    }
    
    // Second condition

     if(h=='e' && (age>=25 && age<=35) && l=='c' && g=='f' && policy_amount<=100000)
   {
        premium = policy_amount/1000;
        premium = premium*3;
        printf("Your premium on 3 per thousand is %d\n",premium);
   }

    // Third condition

    if(h=='p' && (age>=25 && age<=35) && l=='v' && g=='m' && policy_amount<=10000)
   {
        premium = policy_amount/1000;
        premium = premium*6;
        printf("Your premium on 6 per thousand is %d\n",premium);
   }

    // Fourth codition
if(!(h=='e' && (age>=25 && age<=35) && l=='c' && g=='m' && policy_amount<=200000))
    {
       printf("Person is not insured");
    }
}