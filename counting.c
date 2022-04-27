#include<stdio.h>

int main()
{
     int r, c;
      for(r=1; r<=3; r++)
      {
          // 1.for(c=1; c<=5; c++)  2.for(c=2; c<=10; c+=2) 
          // 3. for(c=3; c<=15; c+=3)
          // combime all of the above
          for(c=r; c<=r*5; c=c+r)
          {
              printf("%d",c);

          }
          printf("\n");
      }
    return 0;
}