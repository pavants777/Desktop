#include<stdio.h>
int main()
{
    int a ,b ;
    printf("enter the shape of sides");
    scanf("%d %d",&a,&b);
    if(a==b)
    printf("is an square\n");
   else
    if(a!=b)
    printf("is an rectangle\n");
    return 0;
    
}