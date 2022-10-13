#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a,b,amount,discount;
    cout<<"enter the amount you "<<endl;
    cin>>a;
    if(a<1000)
    discount=0;
    else
    discount=a*8/100;
    amount=a-discount;
    cout<<"after final amount you should pay is ="<<amount<<endl;
    cout<<"the discount amount is "<<discount<<endl;
    return 0;
    getch();
    
}