#include <stdio.h>

/*
 * <반복문>
 * 2. 짝수, 홀수 개수 구하기
 * 10개의 정수를 입력받고 짝수, 홀수의 개수를 구하세요.
 * <입력형태>
 * 1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 * 10
 *
 * <출력형태>
 * even = 5, odd = 5
 */

int main(void) {
	int a;
	int even, odd = 0;
	for (int i=0; i<10; i++) {
		scanf("%d", &a);
		if (a%2 == 0) {
			even++;
		} else {
			odd++;
		}
	}
	printf("even = %d, odd = %d\n", even, odd);

	return 0;
}
