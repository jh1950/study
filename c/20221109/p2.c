#include <stdio.h>

/*
 * int 형 변수 num1, num2를 선언과 동시에 10, 20으로 초기화
 * int 형 포인터 변수 ptr1, ptr2를 선언하여 num1과 num2를 가리키게 하기
 * ptr1과 ptr2를 이용해서 num1의 값을 10 증가시키고, num2의 값을 10 감소 시키기
 * ptr1과 ptr2가 가리키고 있는 대상을 서로 바꾸기
 * ptr1과 ptr2가 가리키고 있는 변수의 값을 출력
 * (물론, ptr1과 ptr2를 이용해서^^)
 */

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("%d, %d\n", *ptr1, *ptr2);

	return 0;
}
