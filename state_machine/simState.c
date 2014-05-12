#include <stdlib.h>
#include <stdio.h>

typedef struct state_machine{
        char name;
	int state;
        char next0;
	char next1;
}state_machine;
int main(int argc, char * argv[])
{	
	state_machine array[8];
	int i;
	char status;
	char input[6];

	array[0].state = 0;
        array[0].name = 'A';
	array[0].next0 = 'E';
	array[0].next1 = 'B';

	array[1].state = 0;
 	array[1].name = 'B';
	array[1].next0 = 'G';
	array[1].next1 = 'E';

	array[2].state = 0;
	array[2].name = 'C';
	array[2].next0 = 'H';
	array[2].next1 = 'A';

	array[3].state = 0;
	array[3].name = 'D';
	array[3].next0 = 'B';
	array[3].next1 = 'H';

	array[4].state = 0;
 	array[4].name = 'E';
	array[4].next0 = 'C';
	array[4].next1 = 'D';
	
	array[5].state = 0;
 	array[5].name = 'F';
	array[5].next0 = 'A';
	array[5].next1 = 'C';
	
	array[6].state = 0;
 	array[6].name = 'G';
	array[6].next0 = 'F';
	array[6].next1 = 'G';

	array[7].state = 0;
 	array[7].name = 'H';
	array[7].next0 = 'D';
	array[7].next1 = 'G';
   for(i=0;i<8;i++){
	printf("%c %c %c \n", array[i].name, array[i].next0, array[i].next1);
	}		
	printf("\nStarting state: E!\n");
        status = 'E';
   while(gets(input)){
     switch (input[0]){
            case '0':{
	          for(i=0;i<8;i++){
			if(array[i].name == status){	
				status = array[i].next0;			
				}
			}
			printf("%c\n", status);
	    	}
	    case '1':{
		  for(i=0;i<8;i++){
			if(array[i].name == status){
				status = array[i].next1;
				}
			}
			printf("%c\n", status);
	    	}
  	    case 'p':{
		  for(i=0;i<8;i++){
			if(array[i].state != 1){
				printf("%c %c %c\n", array[i].name, array[i].next0, array[i].next1);
				}
		  }
	   	}
		  
	   case 'd':{
		  for(i=0;i<8;i++){
			if(array[i].name == status){
				array[i].state = 1;
				}
			}
		}
	   case 'q':{
		exit(0);
		}
}
}
return 0;
}

