#include<iostream>

using namespace std;
int main ()
{
int a,b,c;
cout<<"enter three number "<<endl;
cin>>a>>b>>c;
if (a>b)
    if (a>c)
    {
        cout<<a<<" a is greater "<<endl;
    }
    else
    {
        cout<<c<<" c is greater "<<endl;
    }
    else
         if(b>c)
         {
            cout<<b<< "b is greater "<<endl;
         }
else
{
    cout<<" c is greater "<<endl;
}
}
