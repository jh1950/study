#include <stdio.h>

/*
 * <반복문>
 * 1. 구구단
 * 구구단 2단 ~ 9단까지 출력하세요.
 *
 * <출력형태>
 * 2 x 1 = 2
 * 2 x 2 = 4
 * 2 x 3 = 6
 * 2 x 4 = 8
 * 2 x 5 = 10
 * 2 x 6 = 12
 * 2 x 7 = 14
 * 2 x 8 = 16
 * 2 x 9 = 18
 *
 * 3 x 1 = 3
 * 3 x 2 = 6
 * 3 x 3 = 9
 * 3 x 4 = 12
 * 3 x 5 = 15
 * 3 x 6 = 18
 * 3 x 7 = 21
 * 3 x 8 = 24
 * 3 x 9 = 27
 *
 * ...
 * 9 x 1 = 9
 * 9 x 2 = 18
 * 9 x 3 = 27
 * 9 x 4 = 36
 * 9 x 5 = 45
 * 9 x 6 = 54
 * 9 x 7 = 63
 * 9 x 8 = 72
 * 9 x 9 = 81
 */

int main(void) {
	for (int i=2; i<10; i++) {
		for (int j=1; j<10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
