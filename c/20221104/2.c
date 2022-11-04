#include <stdio.h>

/*
 * Variable
 * - Global
 * - Local
 * - Static
 * - Register
 */

int num = 10;

int SimpleFuncOne() {
	int n = 1;
	n++;
	num++;
	printf("num = %d, n = %d\n", num, n);
	return 0;
}

int main(void) {
	int n = 17;

	SimpleFuncOne();
	printf("num = %d, n = %d\n", num, n);

	return 0;
}
