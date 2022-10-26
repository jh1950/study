#include <stdio.h>

/*
 * 11단계
 * No. 2588
 * 곱셈
 *
 * (세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
 *       4 7 2	--- (1)
 *     x 3 8 5	--- (2)
 * ------------
 *     2 3 6 0	--- (3)
 *   3 7 7 6	--- (4)
 * 1 4 1 6	--- (5)
 * ------------
 * 1 8 1 7 2 0	--- (6)
 * (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
 *
 * 예제 입력
 * 472
 * 385
 * 예제 출력
 * 2360
 * 3776
 * 1416
 * 181720
 */

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	int c1, c2, c3;
	c1 = b/100;
	c2 = (b-c1*100)/10;
	c3 = (b-c1*100)%10;

	printf("%d\n", a*c3);
	printf("%d\n", a*c2);
	printf("%d\n", a*c1);
	printf("%d\n", a*b);

	return 0;
}
