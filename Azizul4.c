#include<stdio.h>
int main ( )
{
    int a,b,c,d,e,avg;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    printf("Enter fourth number :");
    scanf("%d",&d);
    printf("Enter fifth number :");
    scanf("%d",&e);
    avg =(a+b+c+d+e)/5;
    printf("Average is : %d",avg);
    return 0;
}
