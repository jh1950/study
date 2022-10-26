#include <stdio.h>

/*
 * 두 수 a, b를 입력받고, a + b의 값이 99가 아니면 종료하는 프로그램
 *
 * <출력형태>
 * 33 66
 * 44 55
 * 11 88
 * 10 80
 * 종료!
 */

int main(void) {
	int a, b;
	do {
		scanf("%d %d", &a, &b);
	} while (a + b == 99);
	printf("종료!\n");

	return 0;
}
