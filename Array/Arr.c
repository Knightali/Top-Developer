#include <stdio.h>
int main()
{
     int a[4][4]= { {1,2,3},{4,5,6},{7,8,9}};
     int t[4][4],i,j;

     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<=2;i++)
          for(j=0;j<=2;j++)
          {
               t[j][i]=a[i][j]; 
          }
     
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",t[i][j]);
          }
     printf("\n");
     }
     return 0;
}