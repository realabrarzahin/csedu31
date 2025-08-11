#include<stdio.h>

int main(){
	int c;

	while(1){
		if(c = getchar() != EOF){
			printf("1");
		}
		else{
			printf("0");
			break;
		}
	}
	return 0;
}
