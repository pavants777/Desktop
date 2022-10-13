#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numberes\n");
    scanf("%d %d %d ",&a,&b,&c);
    if(a>b)
     if(a>c)
     printf("%d is the greatest number ",a);
     else
     printf("%d is the greatest number\n",c);
    if(b>c)
    printf("%d is the greatest number",b);
    else
    printf("%d is the grestest number\n",c);
    return 0;
}