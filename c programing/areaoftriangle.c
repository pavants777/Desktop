#include<stdio.h>
int main()
{
    int area,s,s1,s2,s3;
    printf("enter the sides of the triangle \n");
    scanf("%d %d %d ",&s1,&s2,&s3);
    s=s1+s2+s3/3;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("area of triangle is= %d\n",area);
    return 0;
}