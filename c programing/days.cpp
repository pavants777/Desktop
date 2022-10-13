#include<bits/stdc++.h>
using namespace std;
int main(){
    int days,years ,months;
    cout<<"enter the total days"<<"\n";
    cin>>days;
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    cout<<"years="<<years<<"\n"<<"months="<<months<<"\n"<<"days="<<days;
    return 0;

}