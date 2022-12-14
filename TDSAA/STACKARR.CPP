#include<iostream.h>
#include<conio.h>
//#include<stdlib.h>

int stack[5], n=4;
int static top = -1;
void push(int value){
	if (top>=n-1){
		cout<<"Stack overflow. \n";
	}
	else{
		top++;
		stack[top]=value;
	     }
}
void pop(){
	if(top==-1)
		cout<<"Stack Underflow. \n";
	else{
		cout<<"The popped item is: "<<stack[top]<<"\n";
		top--;
	}
}
void display(){
	if(top>=0){
	cout<<"The Stack is \n";
	for(int i=top; i>=0; i--){
		cout<<stack[i]<<"\n";
		}
	}
	else{
		cout<<"The stack is Empty. \n";
	}
}
//int stack[5],n;
//int static top=-1;

void main(){
clrscr();
int ch, value;
//for(;;) {
do {
	cout<<"\t* * * Stack implementation * * *\n 1. push\n 2.pop\n 3.Display\n 4.Exit\n \n Enter your choice: >>";
	cin>>ch;
switch(ch){
	case 1: cout<<"Enter the value to push: >>";
		cin>>value;
		push(value);
		break;
	case 2: pop();
		break;
	case 3: display();
		break;
	case 4: cout<<"Exitin....";
		break;
	default: cout<<"Invalid !!";
	}
}
while(ch!=4);
getch();
}



