#include <stdio.h>

/*
 * 9단계
 * No. 2439
 * 별 찍기 - 2
 *
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 * 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
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
	int n, j;
	scanf("%d", &n);
	for (int i=1; i<n+1; i++) {
		for (j=0; j<n-i; j++) {
			printf(" ");
		}
		for (j=0; j<i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
