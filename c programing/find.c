#include<stdio.h>
int main(){
    int a,i;
    printf("enter ther numbere\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        printf("%d\t",i);
       
    }
     return 0;
}
