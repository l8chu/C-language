#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
  
int main(int argc, char * argv[])
{
  int ch;
  int top;
  int count[25];	
  int i=0;
  char letter;

  for (i=0;i<25;i++)
	count[i]=0;
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
			count[ch-97]++;;
		}
		else if(ch == '>'){
		continue;
		}
	}   
  }
	
printf("Valid\n");
for(i=0;i<25;i++){
	letter = (char)(i+97); 
	if(count[i] != 0){
	printf("%c : %d\n", letter, count[i]);
	}
	}
exit(0);
}
