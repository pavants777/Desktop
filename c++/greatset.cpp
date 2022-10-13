#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three number"<<endl;
    cin>>a>>b>>c;
    if(a>b)
     if(a>c)
     cout<<a<<"is the greatest"<<endl;
     else
     cout<<c<<"is the greatestS"<<endl;
    else
    if(b>c)
    cout<<b<<"is the greatest"<<endl;
    else
    cout<<c<<"is the greatest"<<endl;
    return 0;
}