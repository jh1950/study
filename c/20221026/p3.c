#include <stdio.h>

/*
 * 0을 입력할 때까지 정수를 계속 입력받고 그때까지 입력한 값들의 합을 구하는 프로그램
 *
 * <출력형태>
 * 13
 * 15
 * 19
 * 2
 * 0
 * 합: 49
 */

int main(void) {
	int i, j = 0;
	do {
		scanf("%d", &j);
		i+=j;
	} while (j != 0);
	printf("합 : %d\n", i);

	return 0;
}
