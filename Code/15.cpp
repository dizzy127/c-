#include<iostream>

using namespace std;

int main()
{
int m=10,c=20,b=30;

char a;
int days,result;
cout<<"enter ticket: "<<endl;
cin>>a;
cout<<"enter days: "<<endl;
cin>>days;
switch(a){
{
case 'm':
result=10*days;
    break;
case'c':
result=20*days;
break;
case'b':
result=30*days;
break;
default:
    break;
}
}
cout<<"the cost is"<<result<<endl;
}