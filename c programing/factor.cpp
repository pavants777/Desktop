#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,f=1;
    printf("enter the number\n");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        f=f*i;
    }
    printf("after the factorial of %d is = %d",a,f);
    return 0;
}