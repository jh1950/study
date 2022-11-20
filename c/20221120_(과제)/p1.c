#include <stdio.h>

/*
 * 1. 길이가 10인 배열을 선언하고, 10개의 정수를 입력 받아서 홀수와 짝수를 구분 지어 출력하는 프로그램
 * <조건>
 * 1) 출력은 홀수, 짝수 순으로 한다.
 * 2) 10개의 정수는 main함수에서 입력받는다.
 * 3) 출력은 홀수를 출력하는 함수, 짝수를 출력하는 함수를 작성하여 출력한다.
 *
 * <입력>
 * 총 10개의 숫자 입력
 * 입력: 1
 * 입력: 2
 * 입력: 3
 * 입력: 4
 * 입력: 5
 * 입력: 6
 * 입력: 7
 * 입력: 8
 * 입력: 9
 * 입력: 0
 *
 * <출력>
 * 홀수 출력: 1, 3, 5, 7, 9
 * 짝수 출력: 2, 4, 6, 8, 0
 */

int a[10];

void odd_print() {
	printf("홀수 출력: ");
	int n = 0;
	for (int i=0; i<10; i++) {
		if (a[i]%2 == 1) {
			if (n != 0) { printf(", "); }
			n++;
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

void even_print() {
	printf("짝수 출력: ");
	int n = 0;
	for (int i=0; i<10; i++) {
		if (a[i]%2 == 0) {
			if (n != 0) { printf(", "); }
			n++;
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

int main(void) {
	printf("입력: ");
	for (int i=0; i<10; i++) {
		scanf("%d", &a[i]);
	}

	odd_print();
	even_print();

	return 0;
}
