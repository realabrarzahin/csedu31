#include<stdio.h>

int main(){
	
	int bc = 0, lc = 0, tc = 0;
	int c;

	while((c = getchar()) != EOF){
		if(c == '\n')
			++lc;
		else if(c == '\t')
			++tc;
		else if(c == ' ')
			++bc;
		
	}
	printf("Newline: %d\t Tab: %d\t Blank: %d\n", lc, tc, bc);
	return 0;	
}
