#include<iostream>

using namespace std;

int main()
{
int salary,grade,bonus;

cout<<"enter salary "<<endl;
cin>>salary;
cout<<"enter grade "<<endl;
cin>>grade;
if (grade>15)
{
    bonus=salary*0.50+salary;
}
else if (grade==15)
{
    bonus=salary*0.25+salary;
}
else if (grade<15)
{
bonus=salary*0.15+salary;
}
cout<<"bonus "<<bonus<<endl;
}
