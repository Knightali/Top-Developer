#include<stdio.h>
int main()
{
    int num,a,b,c,d,e,f,g,h,i,j;

    printf("Enter any year: ");
    scanf("%d",&num);

    for(a=1000; a<=num; a= a+1000)
    {
        printf("M");
    }
    b= num%1000;
    if(b>=900)
    {
        printf("CM");
    }
    if(b>=500 && b<900){
    for(c=500; c<b; c+=100)
    {
    	printf("D");
	}
    }
    i=num%1000;
    
    if(i>=400 && i<500)
    {
        printf("CD");
    }
    if(i>=100 && i<400){
    for(d=100; d<i; d+=100)
    {
        printf("C");
    }
    }
    e = b%100;
    if(e>=90 && e<=100)
    {
        printf("XC");
    }
    if(e>=80 &&e<90)
    {
        printf("LXXX");
    }
    if(e>=70 &&e<80)
    {
        printf("LXX");
    }
    if(e>=60 &&e<80)
    {
        printf("LX");
    }
    if(e>=50 && e<60)
    {
        printf("X")
    }

   h = e%10;

    if(h==9);
    {
        printf("IX");
    }
    if(h==8);
    {
        printf("VIII");
    }
    if(h==7);
    {
        printf("VII");
    }
    if(h==6);
    {
        printf("VI");
        
    }
    if(h==5);
    {
        printf("V");
    }
    if(h==4);
    {
        printf("IV");
    }
    if(h==3);
    {
        printf("III");
    }
    if(h==2);
    {
        printf("II");
    }
    if(h==1);
    {
        printf("I");
    }

    return 0;
}
