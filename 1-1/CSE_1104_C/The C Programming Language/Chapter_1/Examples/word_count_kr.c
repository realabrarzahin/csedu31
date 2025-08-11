#include<stdio.h>

#define IN 1
#define OUT 0

int main(){
	
	int c;
	int nl, nc, nw; 
	int state = IN;

	nl = nc = nw = 0;

	while((c = getchar()) != EOF){
		++nc;

		if(c == '\n')
			++nl;

		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}

	printf("W: %d\t L: %d\t C: %d\n", nw, nl, nc);
	return 0;
}
