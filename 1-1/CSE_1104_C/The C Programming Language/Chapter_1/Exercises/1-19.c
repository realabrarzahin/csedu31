#include<stdio.h>

#define MAXLINE 1000

void rev_str(char line[], char line_rev[], int len){
	for(int i = 0, j = len; i <= len && j >= 0; i++, j--){
		line_rev[i] = line[j];
	}
}

int del_trail(char line[], int limit){
	int i = 0;
	int c;
	int start_indexing = 0;

	while((c = getchar()) != EOF && c != '\n' && limit--){
		if(start_indexing){
			line[i] = c;
			i++;
		}
		else if(c != ' ' && c != '\t'){
			line[i] = c;
			start_indexing = 1;
			i++;
		}
	}

	while(--i){
		if(line[i] != ' ' && line[i] != '\t') break;
		else line[i] = '\0';
	}

	return i;
}

int main(){

	int len;
	char line[MAXLINE];
	char line_rev[MAXLINE];
	
	while((len = del_trail(line, MAXLINE)) > 0){
		
		rev_str(line, line_rev, len);
		printf("%s\n", line_rev);

		
		int i = MAXLINE;
		while(--i){
			line[i] = '\0';
			line_rev[i] = '\0';
		}
	}

	return 0;
}
