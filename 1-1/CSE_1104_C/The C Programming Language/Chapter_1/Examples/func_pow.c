#include<stdio.h>

// long power(int x, int y) is equiv to long power(int, int)

long power(int x, int y){ 
	long ans = 1;
	for(int i = 1; i <= y; i++)
		ans = ans * x;	

	return ans;
}

int main(){
	int x;
	int y;
	scanf("%d", &x);
	scanf("%d", &y);

	long ans = power(x, y);
	printf("%ld\n", ans);	

	return 0;
}
