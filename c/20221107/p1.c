#include <stdio.h>

/*
 * 간단한 C언어 과제!
 * 1. n을 입력받으면 n개의 피보나치 수열을 출력하는 함수를 작성하세요. (반드시 사용자 정의 함수 사용)
 * <입력 1>
 * 5
 * <출력 1>
 * 1 1 2 3 5
 *
 * <입력 2>
 * 8
 * <출력 2>
 * 1 1 2 3 5 8 13 21 
 */



int a = 0, b = 1, c = 1;

void test(int i) {
	for (int j=0; j<i; j++) {
		printf("%d ", c);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return;
}

int main(void) {
	int i;
	scanf("%d", &i);
	test(i);

	return 0;
}
