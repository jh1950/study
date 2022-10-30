#include <stdio.h>

/*
 * 8단계
 * No. 2438
 * 별 찍기 - 1
 *
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 *
 * 예제 입력
 * 5
 * 예제 출력
 * *
 * **
 * ***
 * ****
 * *****
 */

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i=1; i<n+1; i++) {
		for (int j=0; j<i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
