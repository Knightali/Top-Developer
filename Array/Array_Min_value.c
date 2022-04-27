#include<stdio.h>
int main()
{
    int size,i,min,max;
     printf("Enter the size of Array\n");
    scanf("%d",&size);
    int array[size];
       for(i=0; i<size; i++)
    {
        printf("Enter the  Number in %d Array\n",i);
        scanf("%d",&array[i]);
    } 
    max=array[0];
    min=array[0];
    for(i=1; i<size; i++)
    {
        if(max < array[i])
        {
            max=array[i];
        }
         if(min > array[i])
        {
            min=array[i];
        }
    }
    printf("The maximum value in array is %d\n",max);
    printf("The minimum value in array is %d\n",min);
    return 0;
}