#include<iostream>

using namespace std;

int main()
{
int a,b,c;
cout<<"enter three number "<<endl;
cin>>a>>b>>c;
if(a<b)
if(a<c)
cout<<a<<" a is smaller ";
else
cout<<" c is smaller ";
 

else if(b<c)
{
    cout<<b<<" b is smaller "<<endl;
}
else
{
cout<<c<<" c is smaller "<<endl;
}
}


