#include<iostream>

using namespace std;

int main()
{
int t,s,e;
cout<<"enter the table ="<<endl;
cin>>t;
cout<<"enter the start number ="<<endl;
cin>>s;
cout<<"enter the end number ="<<endl;
cin>>e;
for (int x = s; x <= e;x++)
{
cout<<t<<"*"<<x<<"="<<t*x<<endl;
}

}