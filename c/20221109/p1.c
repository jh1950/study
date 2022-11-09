#include <stdio.h>

/*
 * 최대 길이가 5인 문자열을 계속 입력받다가 'quit'를 입력하면 종료되는 프로그램
 *
 * <입력>
 * hello
 * hi
 * and
 * quit
 *
 * <출력>
 * hello
 * hi
 * and
 */

int main(void) {
	char a[6];

	while (1) {
		scanf("%s", a);

		if (a[0] == 'q' && a[1] == 'u' && a[2] == 'i' && a[3] == 't') { break; }
		printf("%s\n", a);
	}

	return 0;
}
