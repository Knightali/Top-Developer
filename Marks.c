#include<stdio.h>

int main()
{
    int english,math,physics,computer,urdu,sum,total;
    float percentage;
    printf("Enter the marks for english\n");
    scanf("%d",&english);
    printf("Enter the marks for math\n");
    scanf("%d",&math);
    printf("Enter the marks for physics\n");
    scanf("%d",&physics);
    printf("Enter the marks for computer\n");
    scanf("%d",&computer);
    printf("Enter the marks for urdu\n");
    scanf("%d",&urdu);
    total = 500;
    printf("Your total is %d\n",total);
    sum = (english+math+physics+computer+urdu);
    printf("aggregate marks is %d\n",sum);
    // percentage = ((english+math+physics+computer+urdu)*100)/500;
    percentage =(sum*100)/500;
    printf("Your percentage is %f\n",percentage);
    return 0;

}