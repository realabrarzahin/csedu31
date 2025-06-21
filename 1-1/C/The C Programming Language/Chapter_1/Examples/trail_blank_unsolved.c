#include<stdio.h>

#define MAXLINE 1000

int del_trail(char line[], int limit){
	int c;
	
	int start_char = 0;

	int start;
	int end;
	int blank_count = 0;

	int i = 0;
	int start_indexing = 0;

	while((c = getchar()) != EOF && c != '\n' && limit--){
		
		if(start_indexing) i++;

		if(start_char){
			if(c == ' ' || c == '\t'){
	
				if(blank_count){
					end++;		
					blank_count++;
				}else{
					start = i;
					end = i;
					blank_count++;
				}

			}else{
				line[i] = c;
				blank_count = 0;
			}


		}
		else{
			if(c != ' ' && c != '\t'){
				start_char = 1;
				line[i] = c; 
				start_indexing = 1;
			}
		}

	}

	printf("%c, %d - %d, i: %d", line[0], start, end, i);
	
	if(end == i) {
		line[start] = '\0';
		return start + 1;
	}

	return i;
}

void str_copy(char from[], char to[]){
	
	for(int i = 0; from[i] != '\0'; i++){
		to[i] = from[i];
	}
}

int main(){
	
	int len;
	char line[MAXLINE];
	char line_trail[MAXLINE];

	while((len = del_trail(line, MAXLINE)) > 0){
			
		str_copy(line, line_trail);	
		printf("%s\n", line_trail);
	}
	
	return 0;
}
