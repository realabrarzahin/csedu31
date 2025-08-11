#include<stdio.h>

#define MAXLINE 1000

int get_line(char line[]){
	int i = 0;
	int c;
	
	while((c = getchar()) != EOF && c != '\n'){
		line[i] = c;
		i++;
	}

	if(c == '\n'){
		line[i] = '\n';
		i++;
	}

	line[i] = '\0';

	return i;
}

int main(){
	int len;
	char line[MAXLINE];

	while((len = get_line(line)) > 0){
		if(len > 80) printf("%d: %s",len, line);
	}

}
