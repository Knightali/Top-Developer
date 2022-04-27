#include<stdio.h>
int main()
{
    int i=6 , j=11;
    int k ,x;
    k = ++i + j++ + j-- - i++ - ++j;
    x = i-- - --k + ++j - --i - ++k;
    printf( "k= %d\n x= %d",k ,x );
return 0;
}