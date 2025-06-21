#include<stdio.h>

void copy_line(char *line_tmp, char *line, int nc){
	for(int i = 0; i < nc; i++){
		printf("%c", line_tmp[i]);
	}
	printf("\n");
}

int main(){
	
	int c;
	int nc = 0;
	int max_nc = 0;
	char line[100];
	char line_tmp[100];
	
	int i = 0;
	while((c = getchar()) != EOF){
		if(c != '\n'){
			line_tmp[i] = c;
			nc++;
		}
		else{
			if(nc > max_nc){
				max_nc = nc;
				copy_line(line_tmp, line, max_nc);
			}
			nc = 0;
		}
		i++;
	}

	return 0;
}
