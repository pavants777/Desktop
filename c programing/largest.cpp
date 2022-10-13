#include<bits/stdc++.h>
using namespace std;
int main(){
    int large, second,small;
    cout<<"enter the there numbers"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    large=a;
    if(a>b)
     if(a>c)
     large=a;
     else
     large=c;
   else 
     if(b<c)
     large=c;
     else
     large=b;
  small=a;
  if(a<b)
   if(a<c)
   small=a;
   else 
   small=c;
else
if(a>b)
 if(b<c)
 small=b;
 else
 small=c;


 second=(a+b+c)-(small+large);
cout<<"largest  number among is="<<large<<endl;
cout<<"smallest number among is="<<small<<endl;
cout<<"second largest number among is"<<second<<endl;
return 0;
}