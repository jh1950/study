#include <stdio.h>

/*
 * 2단계
 * No. 9498
 * 시험 성적
 *
 * 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
 *
 * 예제 입력
 * 100
 * 예제 출력
 * A
 */

int main(void) {
	int a;
	scanf("%d", &a);
	if ( 90 <= a ) { printf("A"); }
	else if ( 80 <= a ) { printf("B"); }
	else if ( 70 <= a ) { printf("C"); }
	else if ( 60 <= a ) { printf("D"); }
	else { printf("F"); }

	return 0;
}
