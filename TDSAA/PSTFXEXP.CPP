#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define n 10

int stack[n];
int top=-1;
char postfix[n];
void push(int);
int pop();

void main(){
int i, res;
char ch, op1,op2;
clrscr();

cout<<"Enter a valid Postfix Expression";
cin>>postfix;

for(i=0; i<strlen(postfix); i++)
	ch=postfix[i];
if(isdigit(ch))
	push(ch-'0');
else{
	op2=pop();
	op1=pop();
	switch(ch){
		case '+': res=op1+op2;
			push(res);
			break;
		case '-': res=op1-op2;
			push(res);
			break;
		case '*': res=op1*op2;
			push(res);
			break;
		case '/': res=op1/op2;
			push(res);
			break;
		default: cout<<"Invalid Character \n";
		}
	}

cout<<"\n the result is : "<<res;
getch();
}
void push(int item){
	top++;
	stack[top]=item;
	}
	int pop(){
	int item;
	item=stack[top];
	top--;
	return item;
}
