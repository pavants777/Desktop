#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    if(marks>=85 && marks<100)
    printf("Distinction");
    if( marks>=60);
    printf("first class\n");
    if(marks>=50)
    printf("second class\n");
     if(marks>=35)
    printf("pass class\n");
    if(marks>=0 && marks<35)
    printf("fail\n");
    return 0;
}