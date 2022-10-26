#include <stdio.h>

/*
 * 두 수 a, b를 입력받고, a ~ b 까지의 합을 구하는 프로그램
 *
 * <출력형태>
 * 3 6
 * 합 : 18
 */

int main(void) {
	int a, b, c;
	scanf("%d %d", &a, &b);
	for (c = 0; a != b+1; a++) {
		c+=a;
	}
	printf("합 : %d\n", c);

	return 0;
}
