#include<stdio.h>
int main()
{
     int r,s,c;
     for(r=1; r<=3; r++)
     {
          for(c=r; c<=r*5; c=c+r)
          {
               printf("%d",c);
          }
          printf("\n");
     }  
return 0;
}