#include <stdio.h>

/*
 * 10단계
 * No. 10952
 * A+B - 5
 *
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 *
 * 예제 입력
 * 1 1
 * 2 3
 * 3 4
 * 9 8
 * 5 2
 * 0 0
 * 예제 출력
 * 2
 * 5
 * 7
 * 17
 * 7
 */

int main(void) {
	int a, b;
	int i = 1;

	do {
		scanf("%d %d", &a, &b);
		if (a != 0 && b != 0) {
			printf("%d\n", a+b);
		} else {
			i = 0;
		}
	} while (i);

	return 0;
}
