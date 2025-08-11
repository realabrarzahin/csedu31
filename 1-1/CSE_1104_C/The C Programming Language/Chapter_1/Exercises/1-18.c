#include<stdio.h>

#define MAXLINE 1000
#define TRUE 1
#define FALSE 0

int del_trail(char line[], int limit){
	int c;
	int i = 0;
	int start_indexing = FALSE;

	while((c = getchar()) != EOF && c != '\n' && limit--){
		if(start_indexing){
			line[i] = c;
			i++;
		}
		else if(c != ' ' && c != '\t'){
			line[0] = c;
			start_indexing = TRUE;
			i++;
		}
	}	

	printf("%d\n", i);

	while(--i){
		if(line[i] != '\t' && line[i] != ' '){
			break;
		}else{
			line[i] = '\0';
		}
	}
}


int main(){
	
	int len;
	char line[MAXLINE];

	while((len = del_trail(line, MAXLINE)) > 0){
		printf("%s\n", line);
		
		int i = MAXLINE;
		while(--i){
			line[i] = '\0';
		}
	}
	
	return 0;
}
