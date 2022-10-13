#include<stdio.h>
int main()
{
	int a,b;
	float c,e,d;
	printf("enter your marks in borad \n");
	scanf("%d",&a);
	printf("enter your marks in kcet \n");
	scanf("%d",&b);
	c=a/6;
	d=(b/180)*100;
	e=c+d;
	printf("after your percentage %f",e);
	return 0;
}
