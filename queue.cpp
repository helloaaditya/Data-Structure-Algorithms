//progam to demonstrate queue using array
#include <iostream>
using namespace std;
void insert();
void del();
void display();
int queue[100];
int front=-1;
int rear=-1;
int n=5;
int main()
{
int ch;
do
{
cout<<"1.insert";
cout<<"2.delete";
cout<<"3.display";
cout<<"4.exit";
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:
{
insert();
break;
}
case 2:
{
del();
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
void insert()
{
int val;
if(rear==n-1)
{
cout<<"Queue overflow";
}
else
{
if(front==-1)
front=0;
cout<<"Enter the value to be inserted:";
cin>>val;
rear++;
queue[rear]=val;
}
}
void del()
{
if(front==-1 || front>rear)
{
cout<<"Queue underflow";
}
else
{
cout<<"Element deleted from queue is:"<<queue[front];
front++;
}
}
void display()
{
if(front==-1 || front>rear)
cout<<"Queue is empty";
else
{
cout<<"Queue elements are:";
for(int i=front;i<=rear;i++)
cout<<queue[i]<<" ";
}
}
