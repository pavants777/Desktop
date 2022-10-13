#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,fact=1;
    cout<<"enter the number "<<endl;
    cin>>a;
    for(i=1;i<=a;)
    {
        fact=fact*i;
        i++;


    }
    cout<<"factorial of the "<<a<<"is ="<<fact<<endl;
    
    return 0;
}