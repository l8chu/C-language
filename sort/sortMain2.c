#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"

int main(int argc, char * argv[])
{
     int data[100000]; /* Array of ints to sort*/
     int nDataItems;   /* number of actual items in the array */
     int i;
     int count;
     /* test data */
	
       


 if(argc > 1){
   nDataItems = argc-1;
 for(count = 1; count < argc; count++){
   data[count] = atoi(argv[count]);}
}else
{
     nDataItems = 4;
     data[1] = 10;
     data[2] = 20;
     data[3] = 30;
     data[4] = 40;  
}


     
     mySort(data, nDataItems);

     /* check that the data array is sorted */

     for(i = 0; i < nDataItems-1; i++) {

         if(data[i] > data[i+1]) {
             fprintf(stderr, "sort error: data[%d] (=%d)"
                    " should be <= data[%d] (= %d)-  -aborting\n",
                      i, data[i], i+1, data[i+1]);
              exit(1);
         }
}

     /* print sorted array to stdout */
    
      for(i = 1; i <= nDataItems; i++) {
          printf("%d\n", data[i]);
      }

      exit(0);
}

