//implement a dfa that string with sub string 001:
#include<stdio.h>
enum states{q0,q1,q2,qf};
enum states delta(enum states,char);

int main()
{
	printf("\n___(4).implement a dfa that have sub_string 001:)");
	printf("\n");
	 enum states curr_state=q0;
	 	char string[20],ch;
	 int i=0;
	 printf("\n Enter a  string\t");
	 gets(string);
	 ch=string[i];
	 while(ch!='\0')
	 {
	 	curr_state=delta(curr_state,ch);
	 	ch=string[++i];
	 }
	 if(curr_state==qf)
	 printf("\n the string %s is accepted",string);
	 else
	 printf("\n the string %s is not accepted",string);
	 return 0;
}
//Transition Function:
enum states delta(enum states s,char ch)
{
	enum states curr_state;
	switch(s)
	{
		case q0:
		         if(ch=='0')
		         curr_state=q1;
		         else
		         curr_state=q0;
		         break;
		case q1:
		         if(ch=='0') 
				 curr_state=q2;
				 else
				  curr_state=q0;
				  break;
		case q2:
		         if(ch=='0')
		         curr_state=q2;
		         else
		         curr_state=qf;
		         break; 
	    case qf:
		          if(ch=='0'||ch=='1')
		         curr_state=qf;
		         
		        		    
	}
	return curr_state;
}
	
	
	
	
	
	
	
	
	
	
	






