#include<stdio.h>
int main(){
    int a,i;
    printf("enter the limit \n");
    scanf("%d",&a);
    for(i=1;i<a;)
    {
        printf("%d",i);
        i=i+2;

    }
    return 0;
}