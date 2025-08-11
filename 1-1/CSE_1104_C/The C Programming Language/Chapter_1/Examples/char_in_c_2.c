#include<stdio.h>

int main(){

	int c;
	
	// Not c = (getchar() != EOF) or c = getchar() != EOF. As != has higher precendence than = therefore this two expressions are actually the same but gives undesired values.
	while((c = getchar()) != EOF){
		putchar(c);
	}
	return 0;
}
