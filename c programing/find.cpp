#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        cout<<setw(2)<<i;
    }
    return 0;
}