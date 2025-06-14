#include<stdio.h>

int main(){
	
	int c;
	int cs[26];
	int cc[26];
	
	for(int i = 0; i < 26; i++){
		cs[i] = 0;
		cc[i] = 0;
	}

	while((c = getchar()) != EOF){
		if((c - 64) <= 26 && (c - 64) >= 0){
			++cs[c - 65];
		}
		else if((c - 96) <= 26 && (c - 96) >= 0){
			++cc[c - 97];
		}
	}

	for(int i = 0; i < 26; i++){
		printf("%c/%c: ", 65 + i, 97 + i);
		for(int j = 0; j < (cs[i] + cc[i]); j++)
			printf("█");
		printf("\n");
	}
	return 0;
}
