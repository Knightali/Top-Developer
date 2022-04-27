#include<stdio.h>
int main()
{
    int num,a,b,c,d,e,f,g,h,i,j;
    printf("Enter any year:");
    scanf("%d",&num);

    for(a=1000; a<=num; a=a+1000)
    {
        printf("M");
    }
    b= num%1000;
    if(b>=900 && b<1000)
    {
        printf("CM");
    }
    if(b>=800 && b<900)
    {
        printf("DCCC");
    }
    if(b>=700 && b<800)
    {
        printf("DCC");
    }
    if(b>=600 && b<700)
    {
        printf("DC");
    }
    if(b>=500 && b<600)
    {
        printf("D");
    }
    if(b>=400 && b<500)
    {
        printf("CD");
    }
    if(b>=100 && b<400){
    for(c=100; c<=b; c+=100){
        printf("C");
    }
    }
    d=b%100;

    if(d>=90 &&d<100){
        printf("XC");
    }
    if(d>=80 &&d<90){
        printf("LXXX");
    }
    if(d>=70 &&d<80){
        printf("LXX");
    }
    if(d>=60 &&d<70){
        printf("LX");
    }
    if(d>=50 &&d<60){
        printf("L");
    }
    if(d>=40 &&d<50){
        printf("XL");
    }
    if(d>=10 && d<40){
        for(e=10; e<=d; e+=10){
            printf("X");
        }
    }

    f=d%10;
    if(f==9){
        printf("IX");
    }
    if(f==8){
        printf("VIII");
    }
    if(f==7){
        printf("VII");
    }
    if(f==6){
        printf("VI");
    }
    if(f==5){
        printf("V");
    }
    if(f==4){
        printf("IV");
    }
    if(f>=1 && f<4){
        for(g=1; g<=f; g++){
            printf("I");
        }
    }
return 0;
}