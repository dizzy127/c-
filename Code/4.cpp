#include<iostream>

using namespace std;

int main()
{
int rows,col;
cout<<"enter rows and col "<<endl;
cin>>rows>>col;
for(int i=1;i<=rows;i++){
for(int j=1;j<=col;j++){
    cout<<"* ";
}
cout<<endl;
}

}