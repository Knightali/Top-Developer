#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0; i<n;i++)
    {
        printf("Enter array[i] number :  ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;  i<n;i++)
    {
        if(arr[i] == arr[n - (i+1)])
        {
            printf("array[%d] andarr[%d-(%d+1)]  are Equal  \n",i,n,i );
        }
        else
        {
            printf(" array[%d] andarr[%d-(%d+1)] are Not Equal  \n",i,n,i );
            
        }
    }
return 0;
}