#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();
extern int heapDelete();
extern void addHeap(int thing2add);
extern void printXML(int);
extern int heapSize();

int main(int argc, char * argv[])
{
  int value;
  int n;
  int i;
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
	addHeap(value);
    }

	printf("XML:\n");
        printXML(1);

	n = heapSize();
	printf("\nheapsize:%d\n",n);  

	printf("\nSorted order:\n");
	for(i=0;i<n;i++){
		value = heapDelete();
		push(value);
		printf("%d\n", value);
		}

	printf("\nReverse Sorted order:\n");
	for(i=0;i<n;i++){
		printf("%d\n", pop());
		}  
  
  exit(0);
}
