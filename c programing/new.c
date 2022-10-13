#iclude<stdio.h> 
int main()
{
    int a,b,c,large,small,second;
    printf("enter there numbers");
    scanf("%d %d %d",&a,&b,&c);
    large=a;
    if(large<b)
    printf("lagest is equal to %d",b);
    else
    if(large<c)
    printf("lagest is equal to %d",c);
    else 
    printf("lagest is equal to %d"a);
    small=a;
    if(small>b)
    printf("smalleast is equal to %d",b);
    else 
    if(small>c)
    printf("smallest is equal to %d",c);
    else 
    printf("smallesr is equal to %d",a);
    second=(a+b+c)-large+small;
    printf("second smallest is %d",second);
    return 0;
}