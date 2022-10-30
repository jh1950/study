#include <stdio.h>

/*
 * 1단계
 * No. 1330
 * 두 수 비교하기
 *
 * 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
 *
 * 예제 입력 1
 * 1 2
 * 예제 출력 1
 * <
 *
 * 예제 입력 2
 * 10 2
 * 예제 출력 2
 * >
 *
 * 예제 입력 3
 * 5 5
 * 예제 출력 3
 * ==
 */

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if ( a < b ) { printf("<"); }
	else if ( a > b ) { printf(">"); }
	else { printf("=="); }

	return 0;
}
