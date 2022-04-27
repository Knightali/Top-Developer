#include<stdio.h>
int main()
{
    int arr[5],arr1[5],temp,i,j;
    for(i=0; i<=4; i++)
    {
        printf("Enter array[%d] number:\n ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<=3; i++)
    {
        for(j=i+1; j<=4; j++)
        {
            if(arr[i]<arr1[j])
            {
                temp = arr[i];
                arr[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for(j=0; j<=4; j++)
    {
        printf("%d\n",arr1[j]);
    }
return 0;
}