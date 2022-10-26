#include <stdio.h>

/*
 * printf문을 1번 사용해서 출력하기(while 사용)
 *
 * <출력형태>
 * 1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 */

int main(void) {
	int i = 1;
	while (i < 10) {
		printf("%d\n", i);
		i++;
	}

	return 0;
}
