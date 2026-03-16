#include<iostream>
using namespace std;

int n;
int arr[n];
int top=-1;

void insert(int a);

int main()
{
cout<<"enter the no. of elements:"<<endl;
cin>>n;
insert(10);
insert(20);
show();
return 0;
}

void insert(int x)
{
if(top==4)
{
 cout<<"stack is full";
}
else
{ 
 top++;
 arr[top]=x;
 cout<<"elements inserted"<<endl;
}
}
