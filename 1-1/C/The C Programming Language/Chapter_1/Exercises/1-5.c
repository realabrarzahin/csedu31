#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	
	float far;
	printf("Cel\tFar\n");
	for(int cel = UPPER; cel >= LOWER; cel -= STEP){
		far = (9.0/5.0) * cel + 32;
		printf("%3d\t%3.2f\n",cel, far);
	}

	return 0;
}
