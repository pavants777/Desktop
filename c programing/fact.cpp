#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,f=1;
    cout<<"enter a number "<<endl;
    cin>>a;
    for(i=a;i>0;i--)
    {
        f=f*i;
    }
    cout<<"factoial of the "<<a<<"is the "<<f<<endl;
    return 0;
    
}