#include<bits/stdc++.h>
using namespace std;
int main(){
    int digit,sum=0;
    cout<<"enter the digit"<<endl;
    cin>>digit;
    do{
        digit=digit%10;
        sum=sum+digit;

    }while(digit>0);
    return 0;
}