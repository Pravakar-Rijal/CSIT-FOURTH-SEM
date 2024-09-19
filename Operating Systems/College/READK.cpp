#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void readfile();
void writefile();
int a,b,i=0;
char c[40];
char buffer[89];
char *g;
FILE *fr,*fw;
int main()
{
//clrscr();
x:
printf("\n1.Read \n2.Write");
printf("\nUSER A enter your choice");
scanf("%d",&a);
printf("\nUSER B enter your choice");
scanf("%d",&b);
//getch();
if(a==1&&b==1)
{
readfile();
getch();
}
else if(a==1&&b==2)
{writefile();
readfile();
}
else if(a==2&&b==1)
{
readfile();
writefile();
}
else if(a==2&&b==2);
{
printf("both users are not allowed to write");
return 0;
}
}
void readfile()
{
fr=fopen("filename.c","r");
printf("\n file content is:");
while(!feof(fr) )
{
c[i]=(char)fgetc(fr);
printf("%c",c[i]);
i++;
}
fclose (fr);
}
void writefile()
{
printf("enter your content to write:\n");
buffer[0]=100;
g=gets(buffer);
fw=fopen("filename.c","w");
fwrite(g,strlen(g),1,fw);
fclose(fw);
}
