#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    b=c-b;
    a=c-b;
    printf("after interchaning two numbers %d %d\n",a,b);
    return 0;
}