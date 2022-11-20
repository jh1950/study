#include <stdio.h>
#include <string.h>

/*
 * 3. 입력된 단어가 회문인지 아닌지 판별하는 프로그램
 * * 회문 : 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어
 *
 * <조건>
 * 1) 단어는 main함수에서 입력받는다.
 * 2) 판별은 판별하는 함수를 만들어서 한다.
 * 3) 대소문자 구분
 * 4)* 참고 : 문자열의 길이를 구하는 함수는 <string.h>에 있는 strlen() 이다.
 *
 * <입력 1>
 * 단어 입력 : noon
 *
 * <출력 1>
 * 회문
 *
 * <입력 2>
 * 단어 입력 : hello
 *
 * <출력 2>
 * 회문이 아닙니다.
 */

int check(char str[]) {
	int len = strlen(str);
	for (int i=0; i<len/2; i++) {
		if (str[i] != str[len-1-i]) {
			len = 0;
			break;
		}
	}
	return len;
}

int main(void) {
	char str[10];
	printf("단어 입력 : ");
	scanf("%s", str);

	if (check(str)) { printf("회문\n"); }
	else { printf("회문이 아닙니다.\n"); }

	return 0;
}
