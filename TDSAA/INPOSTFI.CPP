#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

char s[20];
int top=-1;
void push(char);
char pop();
int precedence(char);
char element;
void main(){
	char infix[20], postfix[20], ch;
	int j=0;
	clrscr();
cout<<"\n Enter the correct infix expression: \n";
cin>>infix;
push('#');
for(int i=0; i<strlen(infix); i++){
	ch=infix[i];
	if(isalnum(ch))
		postfix[j++]=ch;
	else if(ch=='(')
		push(ch);
	else if(ch==')') {
		while(s[top]!='(')
			postfix[j++]==pop();
		element=pop();
	}
else{
	if(precedence(s[top])>=precedence(ch))
	postfix[j++]=pop();
	push(ch);
	}
}
while(s[top]!='#')
	postfix[j++]=pop();
	postfix[j]='\0';

cout<<"\n Postfix expression conversion is \n"<<postfix;
getch();
}

int precedence(char element){
	switch(element){
	case '+':
	case '-': return 1;
	case '/':
	case '*': return 2;
	case '(':
	case '#': return 0;
	}
}
void push(char element){
	top++;
	s[top]=element;
}

char pop(){
	char element;
	element=s[top];
	top--;
return element;
}