#include<stdio.h>



int main(){
	
	int c;
	int max = 0;
	char max_line[100]; 
	while((c = getchar()) != EOF){
		int nc = 0;
		char line[100];

		if(c != '\n'){
			line[nc] = c;
			nc++;
		}
		else{
			if(nc >= max){
				max = nc;
				for(int i = 0; i <= nc; i++){
					max_line[i] = line[i];
				}
			}
		}

	}

	for(int i = 0; i <= max; i++)
		printf("%c", max_line[i]);

	return 0;
}
