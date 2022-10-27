#include <stdio.h>

/*
 * 2단계
 * No. 10950
 * A+B - 3
 *
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 *
 * 예제 입력
 * 5
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
	int i;
	int a, b;
	scanf("%d", &i);

	while (0 < i) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
		i--;
	}

	return 0;
}
