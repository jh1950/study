#include <stdio.h>

/*
 * 변수 a, b에 값을 입력받고 사칙연산을 수행하는 프로그램을 작성하세요.
 *
 * <출력 형태>
 * 정수 a, b를 입력하세요 : 10 20
 * a + b = 30
 * a - b = -10
 * a * b = 200
 * a / b = 0
 * a % b = 10
 */

int main(void) {
	int a, b;
	printf("a : ");
	scanf("%d", &a);
	printf("b : ");
	scanf("%d", &b);
	
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a * b = %d\n", a*b);
	printf("a / b = %d\n", a/b);
	printf("a %% b = %d\n", a%b);
	
	return 0;
}
