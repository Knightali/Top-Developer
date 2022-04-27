#include<stdio.h>
int main()
{
    int size,i, search_value, Successful=0;
     printf("Enter the size of Array\n");
    scanf("%d",&size);

    int array[size];

       for(i=0; i<size; i++)
    {
        printf("Enter the  Number in %d Array\n",i);
        scanf("%d",&array[i]);
    } 
    printf("Enter the search value: \n");
    scanf("%d",&search_value);
    
    for(i=0; i<size; i++){
        if(array[i]==search_value)
        {
             Successful=1;
        }    
    }
    if(Successful==1) {
        printf("Key value is found");
    }
    if(Successful==0)
    {
        printf("Key value not found");
        return -1;
    }
    return 0;
}