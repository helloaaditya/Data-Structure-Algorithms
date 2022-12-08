#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
 
char stack[20];
int top = -1;
void push(char);
char pop();
int priority(char);
char element;

int main()
{
    char infix[20], postfix[20], ch;
    int i = 0, j = 0;
    cout << "Enter the infix expression: ";
    cin >> infix;
    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
            push(ch);
        else if (isalnum(ch))
            postfix[j++] = ch;
        else if (ch == ')')
        {
            while (stack[top] != '(')
                postfix[j++] = pop();
            element = pop();
        }
        else
        {
            while (priority(stack[top]) >= priority(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }
    while (top != -1)
        postfix[j++] = pop();
    postfix[j] = '\0';
    cout << "The postfix expression is: " << postfix;
    return 0;
}
int priority(char element)
{
    if (element == '^')
        return 3;
    else if (element == '*' || element == '/')
        return 2;
    else if (element == '+' || element == '-')
        return 1;
    else
        return 0;
}
void push(char element)
{
    stack[++top] = element;
}
char pop()
{
    return (stack[top--]);
}