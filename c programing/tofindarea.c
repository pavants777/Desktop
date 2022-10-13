#include<stdio.h>
int main()
{
    int area,cir,rad;
    printf("enter the radius of the cricle");
    scanf("%d",&rad);
    area=3.14*rad*rad;
    cir=3.14*rad*2;
    printf("the area of circle is=%d",area);
    printf("the circumferce of circle is=%d",cir);
    return 0;
}