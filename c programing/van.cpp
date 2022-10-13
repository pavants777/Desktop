#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,digit,sum;
    cout<<"enter the number"<<endl;
    cin>>a;
    while(a!=0)
     {
    digit=a%10;
    sum=sum+digit;
    a=a/10;

      }
cout<<sum<<endl;

}