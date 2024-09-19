//pda accepting equal number of 0s and 1s
#include <stdio.h>
#include <string.h>
#define MAX 100

enum states{q0};
void push(char ch);
void pop();
char get_stack_top();
enum states delta(enum states,char,char);

struct stack
{
    char symbol[MAX];
    int top;
}s;

int main()
{
    char input[20];
    enum states curr_state=q0;
    s.top=-1;
    int i=0;
    char ch='e';
    char st_top='e';
    curr_state=delta(curr_state,ch,st_top);
    printf("\nEnter a binary string");
    gets(input);
    ch=input[i];
    st_top=get_stack_top();
    int c=0;
    while(c<=strlen(input))
    {
        curr_state=delta(curr_state,ch,st_top);
        ch=input[i++];
        st_top=get_stack_top();
        c++;
    }
    if(s.symbol[s.top]=='$')
        printf("The string %s is accepted",input);
    else
        printf("The string %s is rejected",input);
    return 0;
}

enum states delta(enum states s,char ch,char st_top)
{
    enum states curr_state;
    switch(s)
    {
        case q0:
            if(ch=='e' && st_top=='e')
            {
                curr_state=q0;
                push('$');
            }
            else if(ch=='0' && (st_top=='$' || st_top=='0'))
            {
                curr_state=q0;
                push(ch);
            }
            else if(ch=='1' &&(st_top=='$' || st_top=='1'))
            {
                curr_state=q0;
                push(ch);
            }
            else if(ch=='1' && st_top=='0' || ch=='0' && st_top=='1')
            {
                curr_state=q0;
                pop();
            }
            else if(ch=='\0' && st_top=='$')
            {
                curr_state=q0;
            }
            break;
            
    }
    return curr_state;
}
char get_stack_top()
{
    return s.symbol[s.top];
}
void push(char ch)
{
    if(s.top<MAX-1)
        s.symbol[++s.top]=ch;
    else
        printf("Stack full");
}
void pop()
{
    if(s.top>-1)
    {
        s.symbol[s.top]=' ';
        s.top--;
    }
    else
        printf("\nstack is empty");
}
