#include<stdio.h>

int main(){
	
	int c;
	int b_track = 0;

	while((c = getchar()) != EOF){
		if(c != ' '){
			putchar(c);
			b_track = 0;
		}
		else if(!b_track){
			putchar(c);
			b_track = 1;
		}
	}

	return 0;
}
