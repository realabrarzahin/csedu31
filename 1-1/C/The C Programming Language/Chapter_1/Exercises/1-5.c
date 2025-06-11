#include<stdio.h>

int main(){
	
	int lower = 0;
	int upper = 300;
	int step = 20;
	
	float far;
	printf("Cel\tFar\n");
	for(int cel = upper; cel >= lower; cel -= step){
		far = (9.0/5.0) * cel + 32;
		printf("%3d\t%3.2f\n",cel, far);
	}

	return 0;
}
