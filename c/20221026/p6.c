#include <stdio.h>

/*
 * 두 수 a, b를 입력받고, a ~ b 까지의 수들 중 3의 배수만 출력하는 프로그램
 *
 * <출력형태>
 * 1 100
 * 3
 * 6
 * 9
 * .
 * .
 * .
 */

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	while (a != b+1) {
		if (a % 3 == 0) {
			printf("%d\n", a);
		}
		a++;
	}

	return 0;
}
