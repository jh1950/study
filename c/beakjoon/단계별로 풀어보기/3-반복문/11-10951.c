#include <stdio.h>

/*
 * 11단계
 * No. 10951
 * A+B - 4
 *
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 *
 * 예제 입력
 * 1 1
 * 2 3
 * 3 4
 * 9 8
 * 5 2
 * 예제 출력
 * 2
 * 5
 * 7
 * 17
 * 7
 */

int main(void) {
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a+b);
	}

	return 0;
}
