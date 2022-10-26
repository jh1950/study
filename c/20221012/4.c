#include <stdio.h>

int main(void) {
	int a;
	printf("Input : ");
	scanf("%d", &a);
	
	if ( 30 < a ) {
		printf("30보다 크다\n");
	} else {
		printf("30 이하\n");
	}
	
	return 0;
}
