//program to demonstrate stack using array
#include <iostream>
using namespace std;
void push();
void pop();
void display();

int stack[100];
int top=-1;
int n=5;
int main()
{
int ch;
do
{
cout<<"1.push";
cout<<"2.pop";
cout<<"3.display";
cout<<"4.exit";
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
cout<<"Exit";
break;
}
default:
{
cout<<"Invalid choice";
}
}
}while(ch!=4);
return 0;
}
void push()
{
int val;
if(top==n-1)
{
cout<<"Stack overflow";
}
else
{
cout<<"Enter the value to be pushed:";
cin>>val;
top++;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
cout<<"Stack underflow";
}
else
{
cout<<"The popped element is"<<stack[top];
top--;
}
}
void display()
{
if(top==-1)
{
cout<<"Stack is empty";
}
else
{
cout<<"Stack elements are:";
for(int i=top;i>=0;i--)
{
cout<<stack[i];
}
}
}

