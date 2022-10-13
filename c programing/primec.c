#include<stdio.h>
int main(){
    int a,i;
    printf("enter the numbere\n");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    if(a%i==0)
    {
        printf("it is not a prime number \n");
        exit(9);
    }
    printf("it is an prime number\n");
    return 0;
}