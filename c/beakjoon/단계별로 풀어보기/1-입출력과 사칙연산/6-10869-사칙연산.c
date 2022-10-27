#include <stdio.h>

/*
 * 6단계
 * No. 10869
 * 사칙연산
 *
 * 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
 *
 * 예제 입력
 * 7 3
 *
 * 예제 출력
 * 10
 * 4
 * 21
 * 2
 * 1
 */

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);

	return 0;
}
