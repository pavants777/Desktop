#include<stdio.h>
int main()
{
    int a,b;
    float c,d,e;
    printf("enter your marks in board exam");
    scanf("%d",&a);
    printf("enter your marks in kcet exam");
    scanf("%d",&b);
    c=(a/300)*50;
    d=(b/180)*50;
    e=c+d;
    printf("after your percetage %f",e);
    return 0;
}