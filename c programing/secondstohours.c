#include<stdio.h>
int main()
{
    int seconds,hours,minutes;
    printf("enter the total seconds\n");
    scanf("%d",&seconds);
    hours=seconds/(60*60);
    seconds=seconds%(60*60);
    minutes=seconds/60;
    seconds=seconds%60;
    printf("after converting hours=%d minutes=%d seconds=%d",hours,minutes,seconds);
    return 9;
}