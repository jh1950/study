#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * <조건문>
 * 2. 가위바위보
 * 철수와 영희가 가위바위보 대결을 할려고 합니다.
 * 철수와 영희가 낸 것을 각각 랜덤하게 설정하고 대결의 결과를 출력하세요.
 * (* 단, 가위(0), 바위(1), 보(2)로 값을 고정합니다.)
 * (* 랜덤은 srand(), rand() 함수를 사용합니다.)
 * (* srand() 함수를 사용하기위해 time.h를 include 합니다.)
 *
 * <출력형태 1>
 * 철수 : 가위, 영희 : 보
 * 철수 승리
 *
 * <출력형태 2>
 * 철수 : 바위, 영희 : 보
 * 영희 승리
 *
 * <출력형태 3>
 * 철수 : 보, 영희 : 보
 * 비김
 */

int main(void) {
	srand(time(NULL));
	int a = rand()%3;
	int b = rand()%3;

	if (a == 0) {
		printf("철수 : 가위, ");
	} else if (a == 1) {
		printf("철수 : 바위, ");
	} else {
		printf("철수 : 보, ");
	}

	if (b == 0) {
		printf("영희 : 가위\n");
	} else if (b == 1) {
		printf("영희 : 바위\n");
	} else {
		printf("영희 : 보\n");
	}

	if (a == b) {
		printf("비김\n");
	} else if ((a-1+3)%3 == b) {
		printf("철수 승리\n");
	} else {
		printf("영희 승리\n");
	}

	return 0;
}
