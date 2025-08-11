#include<stdio.h>

int main(){
	
	int c;
	int count = 0;

	while((c = getchar()) != '\n'){

		count++;
	}

	printf("%d\n", count);
	return 0;
}
