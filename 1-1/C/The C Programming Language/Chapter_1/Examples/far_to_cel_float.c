#include<stdio.h>

#define START 0
#define END 300
#define STEP 20

int main(){
	
	float cel;
	for(int far = START; far <= END; far += STEP){
	
		cel = (5.0 / 9.0) * (far - 32);
		printf("%3d\t%3.2f\n", far, cel);
	}
	return 0;
}
