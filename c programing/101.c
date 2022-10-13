#include<stdio.h>
int main()
{
    int a,b,largest;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    largest=a;
    if(largest<b)
    printf("largest=%d",b);
    else
    printf("largest=%d",a);
    return 9;
}