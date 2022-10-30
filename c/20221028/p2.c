#include <stdio.h>

/*
 * 다음 출력형태와 같이 출력하시오.
 * <출력형태>
 * *****
 * ****
 * ***
 * **
 * *
 */

int main(void) {
	int i, j;
	for (i=5; 0<i; i--) {
		for (j=i; 0<j; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
