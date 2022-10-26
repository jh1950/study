#include <stdio.h>

int main(void) {
	int a;
	int b;
	printf("a : ");
	scanf("%d", &a);
	printf("b : ");
	scanf("%d", &b);
	
	if ( a == b ) {
		printf("a와 b는 같다\n");
	} else if (a > b) {
		printf("a가 b보다 크다\n");
	} else {
		printf("a가 b보다 작다\n");
	}
	
	return 0;
}
