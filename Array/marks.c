#include<stdio.h>

int main()
{
    int marks[5] ={21,34,54,576,67} , i;
    printf("Enter first marks\n");
    scanf("%d",&marks[1]);
    printf("Enter second marks\n");
    scanf("%d",&marks[2]);
    printf("Enter third marks\n");
    scanf("%d",&marks[3]);
    printf("Enter forth marks\n");
    scanf("%d",&marks[4]);
    printf("Enter fifth marks\n");
    scanf("%d",&marks[5]);


    printf("your first marks is: %d\n",marks[0]);

    printf("your second marks is: %d\n",marks[1]);
   
    printf("your third marks is: %d\n",marks[2]);
   
    printf("your forth marks is: %d\n",marks[3]);
   
    printf("your fifth marks is: %d\n",marks[4]);
   
    for(i=1; i<=5;i++)
    {
        scanf("%d",&marks[i]);

    }
    
    printf("YOur Given Marks is \n");
    for(i=1; i<=5; i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}