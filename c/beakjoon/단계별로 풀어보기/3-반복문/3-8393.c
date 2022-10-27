#include <stdio.h>

/*
 * 3단계
 * No. 8393
 * 합
 *
 * n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
 *
 * 예제 입력
 * 3
 * 예제 출력
 * 6
 */

int main(void) {
	int a, b = 0;
	for (scanf("%d", &a); 0<a; a--) {
		b+=a;
	}
	printf("%d\n", b);

	return 0;
}
