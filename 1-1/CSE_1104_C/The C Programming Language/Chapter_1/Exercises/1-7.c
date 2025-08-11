#include<stdio.h>

#define TRUE 1

int main(){
	
	int c;

	while(TRUE){
		c = getchar();
		printf("%d\t", c);
		putchar(c);
		printf("\n");	

		if(c == EOF){
			// putchar(c);
			printf("%d\n", EOF);
			break;
		}
	}
	return 0;
}
