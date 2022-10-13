#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a,b;
    cout<<"enter the sides of triangle"<<endl;
    cin>>a>>b;
    if(a==b)
    cout<<"it is an square"<<endl;
    else
    cout<<"it is an rectangle"<<endl;
    getch();
    return 0;
}