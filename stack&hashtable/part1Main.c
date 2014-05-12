#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
int main(int argc, char * argv[])
{
  int ch;
  int top;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    //
        if (ch == '<'){    
	ch = getchar();
		if(ch == '/'){
			ch = getchar();
			top = pop();
			if(top != ch){
			printf("InValid\n");
			exit(1);
			}
		}	
		else if(isalpha(ch)){
			push(ch);
		}
		else if(ch == '>'){
		continue;
		}
	    }		
    
  }
	
printf("Valid\n");
exit(0);
}
