#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0 && year%400!=0)
    cout<<"it is an leap year"<<endl;
    else 
    cout<<"it is not an leap year"<<endl;
    return 0;
}