#include<stdio.h>
#define max 100
main() {
		printf("\n___(3).implement a dfa that string end with01:)");
	printf("\n");
   char str[max],f='a';
   int i;
   printf("enter the string to be checked: ");
   scanf("%s",str);
   for(i=0;str[i]!='\0';i++) {
      switch(f) {
         case 'a': if(str[i]=='0') f='b';
            else if(str[i]=='1') f='a';
         break;
         case 'b': if(str[i]=='0') f='b';
            else if(str[i]=='1') f='c';
         break;
         case 'c': if(str[i]=='0') f='b';
            else if(str[i]=='1') f='a';
         break;
      }
   }
   if(f=='c')
      printf("String is accepted", f);
   else printf("String is not accepted", f);
      return 0;
}
