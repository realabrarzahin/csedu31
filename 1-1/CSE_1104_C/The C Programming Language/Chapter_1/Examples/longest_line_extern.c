#include<stdio.h>

#define MAXLINE 1000

int max = 0;
char line[MAXLINE];
char longest[MAXLINE]; // If this global variables weren't here I had to use extern as type to access them inside a function;

int get_line(){
	int c;
	int i = 0;

	while((c = getchar()) != EOF && c != '\n'){
		line[i] = c;	
		i++;
	}
	if(c == '\n'){
		line[i] = '\n';
		i++;
	}
	
	return i;

}

void copy(){
	
	int i = 0;

	while(i < max){
		longest[i] = line[i];
		i++;
	}
}

int main(){
	
	int len;
	
	while((len = get_line()) > 0){
		if(len > max){
			max = len;
			copy();
		}
	}

	printf("%s", longest);

	return 0;
}
