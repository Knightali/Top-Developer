#include<stdio.h>
int main()
{
    int arra1[5]= { 1, 2, 3, 4, 5};
    int array2[5], temp,i=0,j=4;
    for( i=0; i<5; i++)
    {
        printf("%d\n",arra1[i]);
    }
    for(i=0, j=4; i<=4,j>=0; i++,j--)
    {
        temp = arra1[i];
        array2[j] = temp;
        

    }
    for(j=0; j<=4; j++)
    {
        printf("%d\n",array2[j]);
        
    }


return 0;
}