#include <stdio.h>

/*
 * 숫자 범위 : 1 ~ 500
 * 출력 조건 : 3과 5의 공배수
 *
 * <출력형태>
 * 15
 * 30
 * 45
 * .
 * .
 * .
 */

int main(void) {
	int i;
	for (i=1; i<=500; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
