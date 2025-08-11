#include<stdio.h>

#define MAXLINE 1000

int get_line(char line[], int limit);
void str_copy(char line[], char longest[]);

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

	printf("%s[%d chars]", longest, max);

	return 0;
}

int get_line(char line[], int limit){
	int c;	
	int i;

	for(i = 0; (i < limit-1) && ((c = getchar()) != EOF) && (c != '\n'); ++i) line[i] = c;

	if(c == '\n'){
		line[i] = '\n';
		++i;
	}

	line[i] = '\0';

	return i;
}

void str_copy(char line[], char longest[]){
	int i = 0;
	while((longest[i] = line[i]) != '\0') ++i;
}
