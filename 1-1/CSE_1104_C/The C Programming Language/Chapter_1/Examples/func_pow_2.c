#include<stdio.h>

int pw(int base, int n){
	int p;	
	for(p = 1; n > 0; n--)
		p = base * p;

	return p;
}

int main(){
	
	int x, y;
	scanf("%d %d", &x, &y);
	
	int ans = pw(x, y);
	printf("%d", ans);

	return 0;
}
