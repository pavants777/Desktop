#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    if(a<b)
    printf("%d is grestest number",b);
    else
    printf("%d is an grestest number ",a);
    return 0;
}