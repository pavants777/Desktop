#include<bits/stdc++.h>
using namespace std;
int main(){
    int days,months,years;
cout<<"enter the total days "<<endl;
cin>>days;
years=days/365;
days=days%365;
months=days/30;
days=days%30;
cout<<"year="<<years<<"months="<<months<<"days="<<days<<endl;
return 0;
}