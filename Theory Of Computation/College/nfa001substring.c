#include <stdio.h>
#include <string.h>

char input[20];
int l;
int flag;

void s(int i)
{
    flag=1;
}
void r(int i)
{
    if(i<l)
    {
        if(input[i]=='1')
        {
            ++i;
            s(i);
        }
    }
}
void q(int i)
{
    if(i<l)
    {
        if(input[i]=='0')
        {
            ++i;
            r(i);
        }
    }
}
void p(int i)
{
    if(i<l)
    {
        int k=i;
        if(input[i]=='0')
        {
            k++;
            p(k);
            q(k);
        }
        else
        {
            if(input[i]=='1')
            {
                i++;
                p(i);
            }
        }
            
    }
}
int main()
{
    printf("Enter a string");
    gets(input);
    l=strlen(input);
    int i=0;
    flag=0;
    p(i);
    if(flag==1)
        printf("accepted");
    else
        printf("rejected");
    return 0;
}