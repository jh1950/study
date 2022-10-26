#include <stdio.h>

/*
 * 5단계
 * No. 1008
 * A/B
 *
 * 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
 *
 * 예제 입력 1
 * 1 3
 * 예제 출력 1
 * 0.33333333333333333333333333333333
 *
 * 예제 입력 2
 * 4 5
 * 예제 출력 2
 * 0.8
 */

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.9lf", (double)a / (double)b);

	return 0;
}
