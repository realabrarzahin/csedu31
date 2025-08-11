#include<stdio.h>

#define START 300
#define END 0
#define STEP 20

float far_to_cel(int far){
	float cel = (5.0/9.0) * (far - 32.0);
	return cel;
}

int main(){
	printf("far\tcel\n");
	for(int i = START; i >= END; i = i - STEP){
		printf("%d\t%.2f\n", i, far_to_cel(i));
	}

	return 0;
}
