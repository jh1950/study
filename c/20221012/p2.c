#include <stdio.h>

/*
 * 변수 ch에 값을 입력받고 ch 값을 문자열에 출력하는 프로그램을 작성하세요.
 *
 * <출력 형태>
 * 문자를 입력하세요 : a
 * your input a!
 */

int main(void) {
	char ch;

	printf("문자를 입력하세요 : ");
	scanf("%c", &ch);

	printf("your input %c!\n", ch);

	return 0;
}
