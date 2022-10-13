#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[50],i,x,ele;
    cout<<"enter the number of elements "<<endl;
    cin>>x;
    cout<<"enter the elements;"<<endl;
    for(i=0;i<x;i++)
    cin>>a[i];
    cout<<"enter the elements"<<endl;
    cin>>ele;
    for(i=0;i<x;i++)
    {
        if(ele==a[i])
        cout<<i<<endl;
    }
}