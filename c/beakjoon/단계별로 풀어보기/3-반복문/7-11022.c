#include <stdio.h>

/*
 * 7단계
 * No. 11022
 * A+B - 8
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
 * Case #1: 1 + 1 = 2
 * Case #2: 2 + 3 = 5
 * Case #3: 3 + 4 = 7
 * Case #4: 9 + 8 = 17
 * Case #5: 5 + 2 = 7
 */

int main(void) {
	int t;
	int a, b;
	scanf("%d", &t);
	for (int i=1; i<t+1; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
	}

	return 0;
}
