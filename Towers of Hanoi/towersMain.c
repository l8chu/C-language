#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{   
 int n, from, dest;
  if(argc == 1){
     n = 3;
     from = 1;
     dest = 2;
     towers(n,from,dest);
     exit(0);
    }
  else if(argc == 2) {
     n = atoi(argv[1]);
     from = 1;
     dest = 2; 
     towers(n, from, dest);
     exit(0);
    }
  else if(argc == 4 && atoi(argv[1]) != 0 && atoi(argv[2]) != 0 && atoi(argv[3])
         != 0 && atoi(argv[2]) != atoi(argv[3]) && atoi(argv[2]) < 4 && 
         atoi(argv[3]) < 4) 
    {
     n = atoi(argv[1]);
     from = atoi(argv[2]);
     dest = atoi(argv[3]);
     towers(n,from,dest);
     exit(0);
    }
  else{
    fprintf(stderr, "Incorrect Invocation.\n");
    exit(1);
    }
}
  

