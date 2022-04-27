#include<stdio.h>

int main()
{
    int size,i,sum;
    float mean;
    sum=0;
    printf("Enter the size of Array\n");
    scanf("%d",&size);
    int array[size];
    
    for(i=0; i<size; i++)
    {
        printf("Enter the  Number in %d Array\n",i);
        scanf("%d",&array[i]);
        sum = sum + array[i];
    } 
    printf("Total sum of array is %d\n",sum);
    mean = sum/size;
    printf("Mean value is %f\n",mean);
    return 0;
}