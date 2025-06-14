#include<stdio.h>

int main(){
	
	int track[12];
	int c;

	for(int i = 0; i <= 11; i++)
		track[i] = 0;

	while((c = getchar()) != EOF){
		if((c - '0') <= 9 && (c - '0') >= 0){
			track[c - '0'] = track[c - '0'] + 1;
		}else if(c == ' ' || c == '\n' || c == '\t'){
			track[10] = track[10] + 1;
		}else{
			track[11] = track[11] + 1;
		}
	}

	for(int i = 0; i <= 11; i++)
		printf("%d: %d\n", i, track[i]);

	return 0;
}
