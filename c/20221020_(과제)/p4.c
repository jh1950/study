#include <stdio.h>

/*
 * 변수 mode를 선언하고 각 모드에 맞는 문자열을 출력하는 프로그램을 작성하세요.
 *
 * <모드 조건>
 * 0 -> start
 * 1 -> stop
 * 2 -> option
 * 3 -> setting
 * 나머지 -> invalid mode!
 *
 * <출력 형태 1>
 * 모드를 선택하세요 : 0
 * start
 *
 * <출력 형태 2>
 * 모드를 선택하세요 : 1
 * stop
 *
 * <출력 형태 3>
 * 모드를 선택하세요 : 2
 * option
 *
 * <출력 형태 4>
 * 모드를 선택하세요 : 3
 * setting
 *
 * <출력 형태 5>
 * 모드를 선택하세요 : 4
 * invalid mode!
 */

int main(void) {
	int mode;
	
	printf("모드를 선택하세요 : ");
	scanf("%d", &mode);
	
	switch (mode) {
		case 0:
			printf("start\n");
			break;
		case 1:
			printf("stop\n");
			break;
		case 2:
			printf("option\n");
			break;
		case 3:
			printf("setting\n");
			break;
		default:
			printf("invalid mode!\n");
			break;
	}
	
	return 0;
}
