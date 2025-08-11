#include<stdio.h>

#define IN 1
#define OUT 0

int main(){
	
	int c;
	int state = OUT;
	int nc = 0;

	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t' && c != '\n'){
			state = IN;
			putchar(c);
			++nc;
		}
		else{
			state = OUT;
			printf(": ");
	
			for(int i = 0; i < nc; i++)
				printf("█");
			
			printf("\n\n");
			nc = 0;
		}
	}
	

	return 0;
}
