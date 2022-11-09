#include <stdio.h>

/*
 * char ch1 = 'A', ch2 = 'Q';
 * int num = 7;
 *
 * int* pnum = &num;
 * char* pch1;
 * pch1 = &ch1;
 *
 * *pnum = 8;
 */

int main(void) {
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	*pnum += 30;
	printf("%p\n", pnum);

	pnum = &num2;
	*pnum -= 30;
	printf("%p\n", pnum);

	printf("num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}
