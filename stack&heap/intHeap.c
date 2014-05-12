/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
#include <stdio.h>
#include <stdlib.h>

static int heap[100];
static int a=0;

void Heapify(int i)
{
  int l = 2*i;
  int r = 2*i+1;
  int temp;
  int largest;

  if(l<=a && heap[l]>heap[i])
	largest = l;
  else
	largest = i;
  if(r<=a && heap[r]>heap[largest])
	largest = r;
  if(largest != i){
	temp = heap[i];
	heap[i] = heap[largest];
	heap[largest] = temp;
	}
}
int heapDelete()
{ 
  int temp;
  temp = heap[1];
  heap[1] = heap[a];
  heap[a] = temp;
  a--;
  Heapify(1);
  return heap[a+1];

  /**return 0;**/  //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
 int i;
 a++;
 heap[a] = thing2add;
 for(i=a/2;i>0;i=i/2)
	Heapify(i); 
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return a;  //A dummy return statement
}

void printXML(int i)
{ 
  if (i <= a){ 
	printf("<node a='%d'>", heap[i]);
	printXML(2*i);
	printXML(2*i+1);
	printf("</node>");
	}  
}
