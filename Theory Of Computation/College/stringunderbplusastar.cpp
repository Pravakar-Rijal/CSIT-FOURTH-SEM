#include<stdio.h>
#include<string.h>

int main(){
	char word[100];
	int flag = 0;
	printf("Enter a string: ");
	gets(word);
	printf("%s",word);
	
	for(int i = 0; i < strlen(word); i++ )
	{
		if(!(word[i] == 'a' || word[i] == 'b'))
		{
			flag = 1;
			break;
		}
	}
	
	if(!(word[0] == 'b'))
	{
		flag = 1;
	}
	
	if(flag)
	{
		printf("\nThe string is not recongnized under b+a*");
	}
	else if(flag == 0)
	{
		printf("\nThe string is recongnized under b+a*");
	}
	else
	{
		printf("\nSome techincal difficulty");
	}
	
	return 0;
}
