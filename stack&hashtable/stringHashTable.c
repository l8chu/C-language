#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry{
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

int hashfunction(char *str){
}
void printTags(){
}
void add(char * tag)
{

