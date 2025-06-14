#include<stdio.h>

int main(){
	
	int c;
	int wc = 0;
	int cc = 0, cf = 0;	
	while((c = getchar()) != EOF){
		if(!cf && (c != ' ' && c != '\t' && c != '\n'))
			cf = 1;

		if(cf && (c == ' ' || c == '\t' || c == '\n')){
			++wc;
		}

	}

	if(cf && !wc){
		++wc;
	}

	if(!cf){
		wc = 0;
	}

	printf("Words: %d\n", wc);
	return 0;
}
