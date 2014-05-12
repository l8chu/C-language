#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
#include <string.h>
extern char *  pop();
extern void push(char *);

int main(int argc, char * argv[])
{
  int ch;
  int i=0;
  char *tag;
  char *top;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    //
    if(ch == '<'){
	while((ch = getchar()) != '>'){
		ch = tag[i];
		tag[i+1] = '\0';
		i++;}
	if(tag[0] == '/'){
		top = pop();
		for(i=0;i<100;i++)
		tag[i] = tag[i+1];
		if(strcmp(top,tag) != 0){
			printf("Invalid.\n");
			exit(1);}
		}
	else{
		push(tag);
		tag = (char *)malloc(20);
	    }
    }  
  }
  printf("Valid.\n");
  exit(0);
}
