#include<stdio.h>
int main()
{
    int size,i,j=0,k=0;
    printf("Enter the size of an Array: \n");
    scanf("%d",&size);
    int array[size];
    for(i=0; i<size; i++)
    {
        printf("Enter array[%d]: ",i);
        scanf("%d",&array[i]);

        if( array[i]%2==0)
        {
            j++;
        }
        if(array[i]%2 != 0)
        {
            k++;
        }
    }
    printf("Even Number in array  are %d\n",j);
    printf("Odd Number in array  are %d\n",k);




    return 0;
}
