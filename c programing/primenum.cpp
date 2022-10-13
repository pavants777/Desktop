#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(i=2;i<a;++i)
    if(a%i==0)
    {
        cout<<"it is not prime number"<<endl;
        exit(0);
    }
    cout<<"it is an prime number"<<endl;
    return 0;
}