#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int static rear=-1;
int static front=-1;
int queue[5];
int n=5;

void enqueue();
void dequeue();
void display();

void main(){
	clrscr();
int choice;
while(1){
	cout<<"Menu ::\n"<<"1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n";
	cout<<"Enter the choice: ";
	cin>>choice;
	switch(choice){
		case 1: enqueue();
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: exit(0);
		default: cout<<"Invalid Choice. \n";
		}
}
getch();
}

void enqueue(){
	int item;
	if(rear==n-1){
		cout<<"Queue Overflown. \n";
		}
	else{
		if(front==-1){
			front=0;
			}
	cout<<"Enter the element to be inserted : ";
	cin>>item;
	rear++;
	queue[rear]=item;
}
}

void dequeue(){
	if(front==-1 || front>rear){
		cout<<"Queue is Underflown !\n";
	}
	else{
		cout<<"Deleted item is : "<<queue[front]<<"\n";
		front++;
	}
}

void display(){
	if (front==-1 || front>rear){
		cout<<"Queue is Empty. \n";
	}
	else{
		for(int i=front; i<=rear; i++){
			cout<<queue[i]<<" ";
		}
		cout<<"\n";
	}
}