#include<iostream>

using namespace std;

int main()
{
char ch;
cout<<"enter any character "<<endl;
cin>>ch;
if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
{
    cout<<ch<<" you enter voval "<<endl;
}
else
{
    cout<<ch<<" you not enter vovol "<<endl;
}
}