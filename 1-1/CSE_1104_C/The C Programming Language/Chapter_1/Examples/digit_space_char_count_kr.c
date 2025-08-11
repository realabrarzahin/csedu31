#include<stdio.h>

int main(){
	
	int c;
	int ndigits[10];
	int nwhite, nother;

	nwhite = nother = 0;

	for(int i = 0; i < 10; i++)
		ndigits[i] = 0;

	while((c = getchar()) != EOF){
		if((c - '0') >= 0 && (c - '0') <= 9)
			++ndigits[c - '0'];
		else if(c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	printf("digits: ");
	for(int i = 0; i < 10; i++){
		printf("%d ", ndigits[i]);
	}
	printf("\twhite spaces: %d", nwhite);
	printf("\tother chars: %d", nother);
	return 0;
}
