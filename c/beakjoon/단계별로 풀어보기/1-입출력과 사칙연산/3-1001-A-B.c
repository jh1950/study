#include <stdio.h>

/*
 * 3단계
 * No. 1001
 * A-B
 *
 * 두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
 *
 * 예제 입력
 * 3 2
 * 예제 출력
 * 1
 */

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a-b);

	return 0;
}
