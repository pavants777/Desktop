#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks "<<endl;
    cin>>marks;
    if(marks>=85 && marks<=100)
    cout <<"Distinction";
    else
    if(marks>=60)
    cout<<"first class";
    else
   if ( marks>=50)
   cout <<"second class";
   else 
   if(marks>=35)
   cout<<"pass class";
   else 
   cout<<"fail";
   return 0;

}