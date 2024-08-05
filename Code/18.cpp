#include<iostream>

using namespace std;

int main()
{
cout<<"---------- ";
cout<<"A           B";
cout<<"----------";
for (int i = 1; i < 5; ++i)
{
    
cout<<i;
cout.width(25);
cout<<6-i<<endl;
}
cout<<"----------";
return 0;

}
