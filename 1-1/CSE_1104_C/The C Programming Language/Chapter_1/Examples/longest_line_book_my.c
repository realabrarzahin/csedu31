#include<stdio.h>

#define MAXLINE 1000

int get_line(char s[], int limit){
	int c;
	int nc = 0;
	while((c = getchar()) != EOF && (c != '\n') && (limit--)){
		s[nc] = c;
		nc++;
	}

	if(c == '\n'){
		s[nc] = '\n';
		nc++;
	}

	s[nc] = '\0';
	
	return nc;
}

void str_copy(char line[], char longest[]){
	for(int i = 0; line[i] != '\0'; i++) longest[i] = line[i];
}

int main(){

	int len;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = get_line(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			str_copy(line, longest);
		}
	}
	
	printf("%s", longest);
	
	return 0;
}
