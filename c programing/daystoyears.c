#include<stdio.h>
int main()
{
    int days,years,months;
    printf("enter the total days\n");
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    printf("after converting years=%d months=%d days=%d",years,months,days);
    return 0;
}