#include<stdio.h>

int main()
{
    int  num, i ,primr;
     printf("Enter ending number: ");
     scanf("%d",&num);
     for(i=2; i<num; i++)
     {
         if(i%num==0)
         {
             printf("Number is not prime ");
             break;
         }
         if(i%num!=0)
         {
             printf("Number is prime %d number: ", i);
         }
     }

    return 0;
}